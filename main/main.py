#!/usr/bin/python3

"""Main script including control interface as web server
"""
from logging import warning
from dotenv import load_dotenv
import os
from flask import Flask, render_template, url_for, request, flash, redirect, send_from_directory
from werkzeug.utils import secure_filename
from time import sleep, time
import RPi.GPIO as GPIO
from converter.converter import *
import signal
import sys
import os
import subprocess

ABSOLUTE_PATH = os.path.dirname(os.path.abspath(__file__))+ '/'
# Get the current working directory
arduinoScriptPath = ABSOLUTE_PATH + ".." + "/fillStripWithImage.io/fillStripWithImage.io.ino"
arduinoStopScriptPath = os.path.join(ABSOLUTE_PATH, "..", "/fillStripWithImage.io/emptyStrip.io.ino")

load_dotenv()

displayerSubprocess = None


UPLOAD_FOLDER = 'img_uploaded'
ALLOWED_EXTENSIONS = {'png', 'jpg', 'jpeg'}
RADIAL_RESOLUTION_BOUNDS = {'min': 1, 'max': 40}
ANGULAR_RESOLUTION_BOUNDS = {'min': 1, 'max': 36}

RUN_ALLOWED = False


def isFilenameAllowed(filename):
  """Evaluates whether the filename can be accepted or not

  Args:
      filename (string): user input filename

  Returns:
      bool: True if filename is accepter, False otherwise
  """
  global ALLOWED_EXTENSIONS
  return '.' in filename and \
      filename.rsplit('.', 1)[1].lower() in ALLOWED_EXTENSIONS


app = Flask(__name__)
app.config['UPLOAD_FOLDER'] = ABSOLUTE_PATH + UPLOAD_FOLDER
app.secret_key = os.environ.get("flask_secret")


@app.route('/uploads/<path:filename>')
def download_file(filename):
    return send_from_directory('preview', filename, as_attachment=True)


def runArduinoFillScript():
    arduinoProg = "/home/holo/Desktop/HeliceRepo/arduino-1.8.19/arduino"

    codeFile = open(arduinoScriptPath, 'r')
    startLine = codeFile.readline()[3:].strip()
    actionLine = codeFile.readline()[3:].strip()
    boardLine = codeFile.readline()[3:].strip()
    portLine = codeFile.readline()[3:].strip()
    endLine = codeFile.readline()[3:].strip()
    codeFile.close()

    #~ print arduinoScriptPath
    #~ print startLine
    #~ print actionLine
    #~ print boardLine
    #~ print portLine
    #~ print endLine

    if (startLine != "python-build-start" or endLine != "python-build-end"):
        print("Sorry, can't process file")
        sys.exit()

    arduinoCommand = arduinoProg + " --" + actionLine + " --board " + boardLine + " --port " + portLine + " " + arduinoScriptPath

    print ("\n\n -- Arduino Command --")
    print (arduinoCommand)

    print ("-- Starting --\n")

    presult = subprocess.call(arduinoCommand, shell=True)

    if presult != 0:
        print ("\n Failed - result code = %s --"  + str(presult))
    else:
        print ("\n-- Success --")

angular_res_input = None
radial_res_input = None

#process = subprocess.Popen(["/home/holo/Desktop/HeliceRepo/arduino-1.8.19/arduino", "--install-library", "FastLED:3.5.0"])


@app.route("/", methods=['GET', 'POST'])
def home():
  global RUN_ALLOWED, angular_res_input, radial_res_input
  if request.method == 'POST':
    if request.form.get('command') == 'run_prop':
# TODO : Run arduino script + motor
        runArduinoFillScript()
        #process = subprocess.Popen(["/home/holo/Desktop/HeliceRepo/arduino-1.8.19/arduino", "--upload", arduinoScriptPath])
        return render_template('index.html',preview_url="preview/preview.png", RUN_ALLOWED = RUN_ALLOWED, startBtnDisabled = True, stopBtnDisabled = False)
    elif request.form.get('command') == 'stop_prop':
# TODO : Stop arduino script + motor
        process.Kill()
        return render_template('index.html',preview_url="preview/preview.png", RUN_ALLOWED = RUN_ALLOWED, startBtnDisabled = False, stopBtnDisabled = True)

        #process = subprocess.run(["arduino", "--upload", arduinoStopScriptPath])
    angular_res_input = int(request.form.get('angular_resolution'))
    radial_res_input = int(request.form.get('radial_resolution'))
    if not isinstance(angular_res_input, int):
      flash('La résolution angulaire saisie en 3 doit être un entier', "warning")
      return redirect(request.url)
    if angular_res_input > ANGULAR_RESOLUTION_BOUNDS['max'] or angular_res_input < ANGULAR_RESOLUTION_BOUNDS['min']:
      flash('La résolution angulaire doit être comprise entre %i et %i' % (
          ANGULAR_RESOLUTION_BOUNDS['min'], ANGULAR_RESOLUTION_BOUNDS['max']), "warning")
      return redirect(request.url)
    if not isinstance(angular_res_input, int):
      flash('La résolution radiale saisie en 2 doit être un entier', "warning")
      return redirect(request.url)
    if radial_res_input > RADIAL_RESOLUTION_BOUNDS['max'] or radial_res_input < RADIAL_RESOLUTION_BOUNDS['min']:
      flash('La résolution radiale doit être comprise entre %i et %i' % (
          RADIAL_RESOLUTION_BOUNDS['min'], RADIAL_RESOLUTION_BOUNDS['max']), "warning")
      return redirect(request.url)
    # check image input file
    if 'image_to_display' not in request.files:
        flash('Aucun fichier envoyé', "warning")
        return redirect(request.url)
    file = request.files['image_to_display']
    if file.filename == '':
        flash('Aucun fichier sélectionné', warning)
        return redirect(request.url)
    if not isFilenameAllowed(file.filename):
        flash('Fichier image invalide, seuls les fichiers au format .png, .jpg ou .jpeg sont acceptés', 'warning')
        return redirect(request.url)
    if file and isFilenameAllowed(file.filename):
        filename = secure_filename(file.filename)
        fullpath = os.path.join(app.config['UPLOAD_FOLDER'], filename)
        file.save(fullpath)

        # Configuration variables
        nbEllipsesPerDiametralLine = 2*radial_res_input
        imageFileName = fullpath
        outputFileName = ABSOLUTE_PATH + '/static/preview.png'
        nbSectors = angular_res_input  # number of displaying sectors
        angleStep = int(180/nbSectors)
        zoomFactor = 90  # zoom factor in percent

        sourceImg = Image.open(imageFileName)
        sourceImg.convert('RGBA')
        imgMaxSize = max(sourceImg.size)
        baseImgSize = imgMaxSize*100//zoomFactor
        centeredImage = Image.new('RGB', (baseImgSize,)*2, 'black')

        centeredImage.paste(sourceImg, ((
            baseImgSize-sourceImg.size[0])//2, (baseImgSize-sourceImg.size[1])//2))

        pickingPoints = getPickingPoints(
            baseImgSize, nbEllipsesPerDiametralLine, angleStep)
        pickedColors = pickColors(pickingPoints, centeredImage)

        saveArrayPickedColorsInFile(
            nbSectors, int(nbEllipsesPerDiametralLine/2), pickedColors)
        renderPickedPointsPreview(outputFileName, pickedColors, 10)

        flash(
            'Image importée et traitée avec succès, prévisualisation en cours', 'warning')

        RUN_ALLOWED = True

        return render_template('index.html', preview_url="preview/preview.png", RUN_ALLOWED=RUN_ALLOWED)
  return render_template('index.html')


if __name__ == "__main__":
  app.debug = True
  app.run(host='0.0.0.0')

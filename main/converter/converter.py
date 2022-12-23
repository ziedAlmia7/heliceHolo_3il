from PIL import Image
from PIL import ImageDraw
import json
from math import ceil, pi, sin, cos


def renderPickedPointsPreview(filename, pickedColorPoints, ellipsesDiameter):
  """Renders an image containing ellipses at picked points positions with the picked color

  Args:
      filename (string): The rendered image output filename
      pickedColorPoints (array): The list of picked point colors
      ellipsesDiameter ([type]): The diameter of each ellipse representing a picked color point
  """
  maxSizingColorPoint = max(pickedColorPoints, key=(lambda x: max(x[0][1])))
  size = max(maxSizingColorPoint[0][1])
  size += ellipsesDiameter
  size = ceil(size)
  outputImg = Image.new('RGB', (size, )*2, (0, 0, 0))
  draw = ImageDraw.Draw(outputImg)
  draw.rectangle([(0, 0), (size, )*2], 'black')
  for pickedColorPoint in pickedColorPoints:
    upperLeftCornerCoordinates = (
        pickedColorPoint[0][1][0]-ellipsesDiameter/2, pickedColorPoint[0][1][1]-ellipsesDiameter/2)
    bottomRightCornerCoordinates = (
        upperLeftCornerCoordinates[0]+ellipsesDiameter, upperLeftCornerCoordinates[1]+ellipsesDiameter)
    draw.ellipse([upperLeftCornerCoordinates,
                  bottomRightCornerCoordinates], fill=pickedColorPoint[1])
  outputImg.save(filename)


def pickColors(pickingPoints, subjectImage):
  """Pick pixel colors on image

  Args:
      pickingPoints (array): Array of tuples containing picking points coordinates
      subjectImage (PIL.Image): The image where colors must be picked

  Returns:
      Array: List of picked colors in the form (((theta,rIndex),(x,y)),(r,g,b)))
  """
  pickedColorPoints = []
  for pickingPoint in pickingPoints:
    pixel = subjectImage.getpixel(pickingPoint[1])
    pickedColorPoints.append((pickingPoint, pixel))
  return pickedColorPoints


def computePickingPointsPositionsOnDiametralLine(pickingAreaDiameter, nbPoints, angle):
  """Computes the coordinates of aligned points where color must be picked on image

  Args:
      pickingAreaDiameter (int): The diameter of the area where points must be picked
      nbPoints (int): The expected number of points
      angle (float): The angle of the diameter line where holes must be alligned

  Returns:
      array: Array of (x,y) tuples containing holes center positions
  """
  spaceBetweenPoints = pickingAreaDiameter / nbPoints
  radialCoordinates = []
  if (nbPoints % 2):  # number of points is odd, so we place the first one on the center
    radialOrigin = 0
    nbPoints -= 1
  else:
    radialOrigin = spaceBetweenPoints/2
    nbPoints -= 2
    radialCoordinates.append(radialOrigin)
  for i in range(0, nbPoints//2):
    radialCoordinates.append(radialOrigin+(i+1)*spaceBetweenPoints)
  pointsPositions = []
  for radialIndex, radial in enumerate(radialCoordinates):
    pointsPositions.append(((angle, radialIndex), (pickingAreaDiameter /
                           2+radial*sin(angle), pickingAreaDiameter/2+radial*cos(angle))))
    pointsPositions.append(((angle, -radialIndex), (pickingAreaDiameter /
                           2-radial*sin(angle), pickingAreaDiameter/2-radial*cos(angle))))
  return pointsPositions

# def addTrailArcs


def getPickingPoints(pickingAreaDiameter, nbPointsPerLine, angleStep, angleMin=0, angleMax=180):
  """Builds 

  Args:
      pickingAreaDiameter (int): The diameter of the area where points must be picked
      nbHoles (int): The expected number of holes in each diametral line
      angleStep (int): The angle between two consecutive diametral lines
      angleMin (int, optional): The angle of the first line of holes. Defaults to 0.
      angleMax (int, optional): The angle of the last line of holes. Defaults to 180.

  Returns:
      array: Array of picking points
  """
  points = []
  for i in range(angleMin, angleMax, angleStep):
    angle_rad = pi/180.0 * i
    points += computePickingPointsPositionsOnDiametralLine(
        pickingAreaDiameter, nbPointsPerLine, angle_rad)
  if (nbPointsPerLine % 2):  # if the number of points per line is odd then we add the center point once
    points.append(((0, 0), (pickingAreaDiameter//2,)*2))
  return points


def arrayPickedColors(pickedColors):
  cleanedPickedColors = []
  lastTheta = 0
  thetaIndex = 0
  for pickedColor in pickedColors:
    if pickedColor[0][0][0] != lastTheta:
      thetaIndex += 1
    lastTheta = pickedColor[0][0][0]
    cleanedPickedColors.append(
        (thetaIndex, pickedColor[0][0][1], pickedColor[1][0], pickedColor[1][1], pickedColor[1][2]))
    cleanedPickedColors.sort(key=lambda x: (x[0], x[1]))

  return cleanedPickedColors


def saveArrayPickedColorsInFile(nbSectors, nbLeds, pickedColors):
  arrayPoints = arrayPickedColors(pickedColors)

  colorsForStrip = [[[0 for _ in range(3)]
                     for _ in range(nbLeds)] for _ in range(nbSectors)]
  colorsForStrip2 = [[[0 for _ in range(3)]
                      for _ in range(nbLeds)] for _ in range(nbSectors)]

  for i in range(len(arrayPoints)):
      sectorIndex = arrayPoints[i][0]
      rIndex = arrayPoints[i][1]

      if rIndex >= 0:
          colorsForStrip[sectorIndex][rIndex][0] = arrayPoints[i][2]
          colorsForStrip[sectorIndex][rIndex][1] = arrayPoints[i][3]
          colorsForStrip[sectorIndex][rIndex][2] = arrayPoints[i][4]
      else:
          rIndex = -rIndex
          colorsForStrip2[sectorIndex][rIndex][0] = arrayPoints[i][2]
          colorsForStrip2[sectorIndex][rIndex][1] = arrayPoints[i][3]
          colorsForStrip2[sectorIndex][rIndex][2] = arrayPoints[i][4]

  print(str(colorsForStrip).replace("[", "{").replace("]", "}"))

  with open("./test_color_array.h", 'w') as outfile:
      outfile.write("const uint8_t colorsForStrip[" + nbSectors + "][" + nbLeds + "][3] PROGMEM =" + str(
          colorsForStrip).replace("[", "{").replace("]", "}") + ";\n" + " const uint8_t colorsForStrip2[" + nbSectors + "][" + nbLeds + "][3] PROGMEM =" + str(
          colorsForStrip2).replace("[", "{").replace("]", "}") + ";\n"
      )


# Configuration variables
nbEllipsesPerDiametralLine = 2*35
imageFileName = 'bds2.png'
outputFileName = 'result_picking.png'
nbSectors = 16  # number of displaying sectors
angleStep = int(180/nbSectors)
zoomFactor = 90  # zoom factor in percent

if __name__ == "__main__":
  sourceImg = Image.open(imageFileName)
  sourceImg.convert('RGBA')
  imgMaxSize = max(sourceImg.size)
  baseImgSize = imgMaxSize*100//zoomFactor
  centeredImage = Image.new('RGB', (baseImgSize,)*2, 'black')

  centeredImage.paste(sourceImg, ((
      baseImgSize-sourceImg.size[0])//2, (baseImgSize-sourceImg.size[1])//2))
  centeredImage.save('TEST.png')

  pickingPoints = getPickingPoints(
      baseImgSize, nbEllipsesPerDiametralLine, angleStep)
  pickedColors = pickColors(pickingPoints, centeredImage)

  saveArrayPickedColorsInFile(
      nbSectors, nbEllipsesPerDiametralLine/2, pickedColors)

  renderPickedPointsPreview(outputFileName, pickedColors, 10)

from PIL import Image
from PIL import ImageDraw
from math import ceil, pi, sin, cos


def affichagePointsDeCouleur(nomFichier, pointsDeCouleurExtraits, diametreLed):
    """Renders an image containing ellipses at picked points positions with the picked color

    Args:
        nomFichier (string): The rendered image output nomFichier
        pointsDeCouleurExtraits (array): The list of picked point colors
        diametreLed ([type]): The diameter of each ellipse representing a picked color point
    """
    maxSizingColorPoint = max(pointsDeCouleurExtraits,
                              key=(lambda x: max(x[0][1])))
    size = max(maxSizingColorPoint[0][1])
    size += diametreLed
    size = ceil(size)
    outputImg = Image.new('RGB', (size, )*2, (0, 0, 0))
    draw = ImageDraw.Draw(outputImg)
    draw.rectangle([(0, 0), (size, )*2], 'black')
    for pickedColorPoint in pointsDeCouleurExtraits:
        upperLeftCornerCoordinates = (
            pickedColorPoint[0][1][0]-diametreLed/2, pickedColorPoint[0][1][1]-diametreLed/2)
        bottomRightCornerCoordinates = (
            upperLeftCornerCoordinates[0]+diametreLed, upperLeftCornerCoordinates[1]+diametreLed)
        draw.ellipse([upperLeftCornerCoordinates,
                      bottomRightCornerCoordinates], fill=pickedColorPoint[1])
    outputImg.save(nomFichier)


def extractionCouleurs(pointsDextraction, image):
    """Pick pixel colors on image

    Args:
        pointsDextraction (array): Array of tuples containing picking points coordinates
        image (PIL.Image): The image where colors must be picked

    Returns:
        Array: List of picked colors in the form (((theta,rIndex),(x,y)),(r,g,b)))
    """
    pointsDeCouleurExtraits = []
    for pointsDextraction in pointsDextraction:
        pixel = image.getpixel(pointsDextraction[1])
        pointsDeCouleurExtraits.append((pointsDextraction, pixel))
    return pointsDeCouleurExtraits


def coordonneePointsLigneDeDiametre(diametreZoneDextraction, nbPoints, angle):
    """Computes the coordinates of aligned points where color must be picked on image

    Args:
        diametreZoneDextraction (int): The diameter of the area where points must be picked
        nbPoints (int): The expected number of points
        angle (float): The angle of the diameter line where holes must be alligned

    Returns:
        array: Array of (x,y) tuples containing holes center positions
    """
    spaceBetweenPoints = diametreZoneDextraction / nbPoints
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
        pointsPositions.append(((angle, radialIndex), (diametreZoneDextraction /
                               2+radial*sin(angle), diametreZoneDextraction/2+radial*cos(angle))))
        pointsPositions.append(((angle, -radialIndex), (diametreZoneDextraction /
                               2-radial*sin(angle), diametreZoneDextraction/2-radial*cos(angle))))
    return pointsPositions


def pointsDextraction(diametreZoneDextraction, nbPointsParLigne, angleAvance, angleMin=0, angleMax=180):
    """Builds 

    Args:
        diametreZoneDextraction (int): The diameter of the area where points must be picked
        nbHoles (int): The expected number of holes in each diametral line
        angleAvance (int): The angle between two consecutive diametral lines
        angleMin (int, optional): The angle of the first line of holes. Defaults to 0.
        angleMax (int, optional): The angle of the last line of holes. Defaults to 180.

    Returns:
        array: Array of picking points
    """
    points = []
    for i in range(angleMin, angleMax, angleAvance):
        angle_rad = pi/180.0 * i
        points += coordonneePointsLigneDeDiametre(
            diametreZoneDextraction, nbPointsParLigne, angle_rad)
    if (nbPointsParLigne % 2):  # if the number of points per line is odd then we add the center point once
        points.append(((0, 0), (diametreZoneDextraction//2,)*2))
    return points


# Configuration variables
nbLedsHelice = 2*48
nomFichier = 'pepsi.png'
nomFichierSortie = 'result_picking.png'
angleAvance = 15
zoomFactor = 100  # zoom factor in percent

if __name__ == "__main__":
    imageSource = Image.open(nomFichier)
    imageSource.convert('RGBA')
    imgMaxSize = max(imageSource.size)
    baseImgSize = imgMaxSize*100//zoomFactor
    imageCentree = Image.new('RGB', (baseImgSize,)*2, 'black')

    imageCentree.paste(imageSource, ((
        baseImgSize-imageSource.size[0])//2, (baseImgSize-imageSource.size[1])//2))
    imageCentree.save('TEST.png')

    pointsDextraction = pointsDextraction(
        baseImgSize, nbLedsHelice, angleAvance)
    pointsDeCouleur = extractionCouleurs(pointsDextraction, imageCentree)
    print(pointsDeCouleur)
    affichagePointsDeCouleur(nomFichierSortie, pointsDeCouleur, 10)
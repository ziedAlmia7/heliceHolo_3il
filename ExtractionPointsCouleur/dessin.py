from PIL import Image
from PIL import ImageDraw

# Open the image
im = Image.open("image.png")

# Create a drawing context
draw = ImageDraw.Draw(im)

# Set the color for the pixels
pixel_color = (255, 0, 0)  # Red

# Draw the pixels at the specified coordinates
draw.ellipse(((10, 10), (20, 20)), fill=pixel_color)  # Draw a single pixel
draw.ellipse(((20, 20), (30, 30)), fill=pixel_color)
# draw.ellipse((30, 30), fill=pixel_color)

# Save the image
im.save("image_with_pixels.png")

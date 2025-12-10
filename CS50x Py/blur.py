from PIL import Image, ImageFilter

before = Image.open("bridge.jpeg")
after = before.filter(ImageFilter.BoxBlur(5))
after.save("out.jpeg")


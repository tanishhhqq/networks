# Decode the data in the image
def decode():
  img = input("Enter image name(with extension) : ")
  image = Image.open(img, 'r')
  data = ''
  imgdata = iter(image.getdata())
  img1 = cv2.imread(img)
  cv2.imshow('Network Security Image', img1)
  cv2.waitKey(0)
  cv2.destroyAllWindows()
  while (True):
    pixels = [value for value in imgdata. next ()[:3] +
              imgdata. next ()[:3] +
              imgdata. next ()[:3]]
# string of binary data
binstr = ''
for i in pixels[:8]:
  if (i % 2 == 0):
    binstr += '0'
  else:
    binstr += '1'
    data += chr(int(binstr, 2))
    if (pixels[-1] % 2 != 0):
      return data
# Main Function
def main():
  print("Decoded Word : " + decode())
# Driver Code
if name == ' main ' :
# Calling main function
  main()

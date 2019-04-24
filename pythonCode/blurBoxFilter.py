import cv2
import numpy as np
import sys

#read image
image = cv2.imread("../assets/putin_noise.jpg")

#define kernels sizes
kernelSize1 = 3
kernelSize2 = 7

#Apply box filter
result1 = cv2.blur(image, (kernelSize1, kernelSize1), (-1, -1))
result2 = cv2.blur(image, (kernelSize2, kernelSize2), (-1, -1))

#create windows to display image
cv2.namedWindow("image", cv2.WINDOW_NORMAL)
cv2.namedWindow("result1", cv2.WINDOW_NORMAL)
cv2.namedWindow("result2", cv2.WINDOW_NORMAL)

#display images
cv2.imshow("image", image)
cv2.imshow("result1", result1)
cv2.imshow("result2", result2)

#press esc to exi the program
cv2.waitKey(0)

#close all the opened windows
cv2.destroyAllWindows()
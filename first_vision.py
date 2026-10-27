import cv2
img = cv2.imread("test.jpg")
if img is None:
    print("Fail")
else:
    print("Success")
    cv2.imshow("My First Vision",img)
    cv2.waitKey(0)
cv2.destroyAllWindows()
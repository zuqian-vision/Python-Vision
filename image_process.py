import cv2
img=cv2.imread("test.jpg")
if img is None:
    print("Fail")
else:
    gray_img=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
    edges_img=cv2.Canny(gray_img,100,200)
    cv2.imshow("1.Original",img)
    cv2.imshow("2.Gray",gray_img)
    cv2.imshow("3.Edges",edges_img)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
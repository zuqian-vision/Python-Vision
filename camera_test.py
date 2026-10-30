import cv2
cap = cv2.VideoCapture(0)
if not cap.isOpened():
    print("Fail")
else:
    print("Success")
    while True:
       ret, frame = cap.read()
       if not ret:
          break
       gray_frame = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
       edges = cv2.Canny(gray_frame,50,150)
       cv2.imshow("Original",frame)
       cv2.imshow("Gray",gray_frame)
       cv2.imshow("edges",edges)
       if cv2.waitKey(1)&0xFF == ord('q'):
           break
cap.release()
cv2.destroyAllWindows()
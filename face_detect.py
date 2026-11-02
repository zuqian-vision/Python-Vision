import cv2
import time
import os
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades+"haarcascade_frontalface_default.xml")
caps = cv2.VideoCapture(0)
while True:
    ret,frame = caps.read()
    if not ret:
      break
    key=cv2.waitKey(1)&0xFF
    if key == ord('q'):
      break
    elif key ==ord('a'):
      current_time = time.strftime("%Y%m%d_%H%M%S")
      filename=f"face_{current_time}.jpg"
      abs_path = os.path.abspath(filename)
      is_success = cv2.imwrite(filename,frame)
      print(f"{abs_path}")
      cv2.imwrite("face.jpg",frame)
      print("SUCCESS")
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    faces = face_cascade.detectMultiScale(gray, scaleFactor=1.05, minNeighbors=8, minSize=(30, 30))
    for(x, y, w, h) in faces:
      cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 2)
      cv2.putText(frame,"FACE",(x,y-10),cv2.FONT_HERSHEY_SIMPLEX,2,(0, 255, 0),2)
    cv2.imshow("Face Detection",frame)
caps.release()
cv2.destroyAllWindows()

# -*- coding: utf-8 -*-
"""
Created on Thu Aug 12 00:57:08 2021

@author: Murat Baran Polat
"""

import cv2
import numpy as np 
import dlib

#process of linking to respective computer's camera
capture = cv2.VideoCapture(0)
#getting coordinates
detector= dlib.get_frontal_face_detector()
width  = capture.get(3) # float width
height = capture.get(4) # float height    
# Make a video writer to see if video being taken as input inflict any changes you make
fourcc = cv2.VideoWriter_fourcc(*"MJPG")
out_video = cv2.VideoWriter('result/output.avi', fourcc, 20.0, (int(width), int(height)), True)


while True:
    ret, frame = capture.read()
    frame = cv2.flip(frame,1)

    #operations
    grey = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    faces = detector(grey)
    i= 0

    for face in faces:
        x, y= face.left(), face.top()
        x1, y1= face.right(), face.bottom()
        cv2.rectangle(frame, (x, y), (x1, y1), (0, 255, 0), 2)

        i= i+1

        cv2.putText(frame, 'face:' +str(i), (x-10, y-10), cv2.FONT_HERSHEY_SIMPLEX, 0.7, (0,0,255), 2)
        print(face, i)
    
    cv2.imshow('frame', frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

    #capture.release()
    #cv2.destroyAllWindows()
    
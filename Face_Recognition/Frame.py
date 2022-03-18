# -*- coding: utf-8 -*-
"""
Created on Thu Aug 12 02:05:57 2021

@author: Murat Baran Polat
"""

import cv2
import numpy as np 
import dlib

# suppose this was the source 
cap = cv2.VideoCapture(0)
# Get width and height of the frame of video
width  = cap.get(3) # float width
height = cap.get(4) # float height    
# Make a video writer to see if video being taken as input inflict any changes you make
fourcc = cv2.VideoWriter_fourcc(*"MJPG")
out_video = cv2.VideoWriter('result/output.avi', fourcc, 20.0, (int(width), int(height)), True)
# Then try this
while(cap.isOpened()):
        # Read each frame where ret is a return boollean value(True or False)
        ret, frame = cap.read()
        # if return is true continue because if it isn't then frame is of NoneType in that case you cant work on that frame
        if ret:
            # Any preprocessing you want to make on the frame goes here
            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            # See if preprocessing is working on the frame it should
            cv2.imshow('frame', gray)
            # finally write your preprocessed frame into your output video
            out_video.write(gray) # write the modifies frame into output video 
            # to forcefully stop the running loop and break out, if it doesnt work use ctlr+c
            if cv2.waitKey(1) & 0xFF == ord('q'):
                break
       # break out if frame has return NoneType this means that once script encounters such frame it breaks out 
       # You will get the error otherwise 
        else:
            break
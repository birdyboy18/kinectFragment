//
//  triangle.cpp
//  kinectExample
//
//  Created by Paul Bird on 18/03/2014.
//
//

#include "triangle.h"

Triangle::Triangle(int x, int y, int size, int speed, int r, int g, int b) {
    //Set it's colour and put it in the middle
    colour.set(r,g,b);
    
    this->x = x;
    
    this->y = y;
    
    this->size = size;
    
    this->speed = speed;
    
    ofLog(OF_LOG_NOTICE) << "The x Pos is " << x;
    
    
}

void Triangle::update(){
    
    if (y + size <= 0) {
        y = ofGetWindowHeight();
    }
    
    y -= speed;
}

void Triangle::rotate(float radians) {
    float s = sin(radians);
    float c = cos(radians);
    
    
}

void Triangle::draw(){
    ofSetColor(colour);
    ofFill();
    ofTriangle(x-size,y+size,x,y-size,x+size,y+size);
}

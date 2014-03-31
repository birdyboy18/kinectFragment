//
//  triangle.h
//  kinectExample
//
//  Created by Paul Bird on 18/03/2014.
//
//

#ifndef kinectExample_triangle_h
#define kinectExample_triangle_h

#include "ofMain.h"

class Triangle {
public:
    //Constructor
    Triangle(int x, int y, int size, int speed, int r, int g, int b);
    
    //Methods
    void update();
    void draw();
    void rotate(float radians);
    
    //Properties
    int x;
    int y;
    int size;
    int speed;
    int r;
    int g;
    int b;
    ofColor colour;
    
};



#endif

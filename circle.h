#ifndef _CIRCLE
#define _CIRCLE

#include "ofMain.h"

class Circle {
public:
	void setup(float x = 100, float y = 100, float radius = 64, ofColor color = ofColor::orange);
	void draw();
	
	float x;
	float y;
	float radius;
	ofColor color;
};

#endif
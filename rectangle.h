#ifndef _RECTANGLESHAPE
#define _RECTANGLESHAPE

#include "ofMain.h"

class RectangleShape {
public:
	void setup(float x, float y, float width, float height, ofColor color);
	void draw();

	float x;
	float y;
	float width;
	float height;
	ofColor color;
};

#endif
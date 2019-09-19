#ifndef _PLAYER
#define _PLAYER

#include "ofMain.h"

class Player {
public:
	void setup(float x, float y, float width, float height, ofColor color);
	void draw();
	bool isCollided();

	float x;
	float y;
	float width;
	float height;
	ofColor color;
};

#endif
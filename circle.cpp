#include "circle.h"

void Circle::setup(float _x, float _y, float _radius, ofColor _color) {
	x = _x;
	y = _y;
	radius = _radius;
	color = _color;
}

void Circle::draw() {
	ofSetColor(color);
	ofDrawCircle(x, y, radius);
}

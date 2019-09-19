#include "player.h"

void Player::setup(float _x, float _y, float _width, float _height, ofColor _color) {
	x = _x;
	y = _y;
	width = _width;
	height = _height;
	color = _color;
}

void Player::draw() {
	ofSetColor(color);
	ofDrawRectangle(x, y, width, height);
}

bool Player::isCollided() {
	return false;
}
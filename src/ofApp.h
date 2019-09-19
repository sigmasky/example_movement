#pragma once

#include "ofMain.h"
#include "../circle.h"
#include "../rectangle.h"
#include "../player.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		Circle circle1;
		Circle circle2;

		RectangleShape rectangle1;
		RectangleShape rectangle2;
		vector<RectangleShape> rectangle_list;

		Player player;

		float SPEED = 10;
		
		bool up = false; 
		bool down = false;
		bool right = false;
		bool left = false;
};

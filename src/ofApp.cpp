#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowTitle("Learning Project");
	//ofSetBackgroundColor(ofColor::black);

	circle1.setup();
	circle2.setup(1000, 600, 128, ofColor::purple);

	rectangle1.setup(100, 100, 100, 100, ofColor::red);
	rectangle2.setup(500, 500, 100, 100, ofColor::black);
	rectangle_list.push_back(rectangle1);
	rectangle_list.push_back(rectangle2);

	player.setup(300, 100, 100, 100, ofColor::darkGreen);
}

//--------------------------------------------------------------
void ofApp::update(){
	if (up) {
		player.y -= SPEED;
	}
	if (down) {
		player.y += SPEED;
	}
	if (right) {
		player.x += SPEED;
	}
	if (left) {
		player.x -= SPEED;
	}

	for (int i = 0; i < rectangle_list.size(); i++) {
		bool x_range = (player.x < rectangle_list[i].x + rectangle_list[i].width) && 
			(player.x + player.width > rectangle_list[i].x);
		bool y_range = (player.y < rectangle_list[i].y + rectangle_list[i].height) &&
			(player.y + player.height > rectangle_list[i].y);
		
		if (x_range && y_range) {
			cout << "In Rectangle " << i << "!" << endl;
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	player.draw();
	rectangle1.draw();
	rectangle2.draw();
	circle1.draw();
	circle2.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == OF_KEY_UP || key == 'w') up = true;
	if (key == OF_KEY_DOWN || key == 's') down = true;
	if (key == OF_KEY_RIGHT || key == 'd') right = true;
	if (key == OF_KEY_LEFT || key == 'a') left = true;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	if (key == OF_KEY_UP || key == 'w') up = false;
	if (key == OF_KEY_DOWN || key == 's') down = false;
	if (key == OF_KEY_RIGHT || key == 'd') right = false;
	if (key == OF_KEY_LEFT || key == 'a') left = false;
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){}

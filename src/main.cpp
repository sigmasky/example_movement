#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int WINDOW_HEIGHT = 768 * 1.5;
int WINDOW_WIDTH = 1024 * 1.5;

int main(){
	ofSetupOpenGL(WINDOW_WIDTH, WINDOW_HEIGHT, OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}

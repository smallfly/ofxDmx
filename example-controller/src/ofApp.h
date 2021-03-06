#pragma once

#include "ofMain.h"

#include "ofxCurvesTool.h"
#include "ofxDmx.h"
#include "ofxAutoControlPanel.h"

class ofApp : public ofBaseApp {
public:
	void setup();
	void exit();
	void update();
	void draw();
	void keyPressed(int key);
	
	ofxCurvesTool redCurve, greenCurve, blueCurve;
	ofxDmx dmx;
	ofxAutoControlPanel panel;
	string port;
	int modules, channelsPerModule;
};

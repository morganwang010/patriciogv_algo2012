#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "SmokeLine.h"

class testApp : public ofSimpleApp{
public:
		
    void setup();
    void update();
    void draw();
		
    void keyPressed  (int key);
    void keyReleased (int key);
		
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased();
		
    SmokeLine           actualLine;
    vector<SmokeLine>   lines;
    
    ofPoint prevMouse;
};

#endif
	

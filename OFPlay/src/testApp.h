#pragma once

#include "ofMain.h"

#include "ofAddon.h"
#include "CBLinuxProject.h"
#include "CBWinProject.h"
#include "visualStudioProject.h"
#include "xcodeProject.h"
#include <Poco/Path.h>

#include "ofxXmlSettings.h"

#include "textButton.h"
#include "checkList.h"

class testApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();

    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
 
    void    loadProject(string _path);
    bool    selectAddon(string _addonName);
    bool    isAddonCore(string _addonName);
    string  setTarget(int targ);
    void    setStatus(string newStatus);
    void    generateProject();
    
    ofTrueTypeFont  font;
    ofTrueTypeFont  secondFont;
    
    checkList       platformsList;
    checkList       coreAddonsList;
    checkList       otherAddonsList;
    
    vector<textButton*> buttons;
    textButton      backButton;
    textButton      generateButton;
    
    string      appToRoot;
    string      defaultLoc;
    string      addonsPath;
    
    string      status;
    float       statusSetTime;
    float       statusEnergy;
    
    baseProject *project;
    int         mode;
    enum { MODE_NORMAL, MODE_ADDON, MODE_PLATFORM };
    
    bool        bHaveNonCoreAddons;
};

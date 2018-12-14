#pragma once

#include "ofxiOS.h"
#include <ARKit/ARKit.h>
#include "ofxARKit.h"
#include "ofxGui.h"

#include "geoRenderer.h"

class ofApp : public ofxiOSApp {
    
public:
    
    ofApp (ARSession * session);
    ofApp();
    ~ofApp ();
    
    void setup();
    void update();
    void draw();
    void exit();
    
    void touchDown(ofTouchEventArgs &touch);
    void touchMoved(ofTouchEventArgs &touch);
    void touchUp(ofTouchEventArgs &touch);
    void touchDoubleTap(ofTouchEventArgs &touch);
    void touchCancelled(ofTouchEventArgs &touch);
    
    void lostFocus();
    void gotFocus();
    void gotMemoryWarning();
    void deviceOrientationChanged(int newOrientation);
    
    GeoRenderer geoRenderer;
    
    // ====== CAMERA ====== //
    ofCamera camera;
    
    // ====== AR STUFF ======== //
    ARSession * session;
    ARRef processor;
    vector < matrix_float4x4 > mats;
    vector<ARAnchor*> anchors;
    
    // ====== STYLES ====== //
    ofTrueTypeFont font;
    
    
};



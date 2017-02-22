#include "ofApp.h"
ofFbo fbo;

//--------------------------------------------------------------
void ofApp::setup(){
    
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA);
    
    fbo.begin();
    ofClear(255,255,255, 0);
    fbo.end();
    
    ofSetVerticalSync(true);

    
    ofEnableAlphaBlending();
    ofBackground(30,30,30);
    
for(int i=0; i<NTRIS; i++){
    myRectangle[i].pos.x = ofRandom(0,100);
    myRectangle[i].pos.y = ofRandom(0,50);}
    
    
    myCircle.pos.x = 400;
    myCircle.pos.y = 350;



}

//--------------------------------------------------------------
void ofApp::update(){
     for(int i=0; i<NTRIS; i++){
         myRectangle[i].zenoToPoint(mouseX, mouseY);}
    
           myCircle.zenoToPoint1(mouseX, mouseY);
    
           for(int i=0; i<NRECS; i++){
            myTriangle[i].update(); }


}

//--------------------------------------------------------------
void ofApp::draw(){
    fbo.begin();
    ofSetColor(0,0,0,10);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    ofSetColor(0,0,255);

    for(int i=0; i<NTRIS; i++){

        myRectangle[i].draw();}


    
        for(int i=0; i<NRECS; i++){
        myTriangle[i].draw();
     }
    
    fbo.end();
    
    ofSetColor(255,255,255);
    fbo.draw(0,0);
    
    myCircle.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

//
//  circles.cpp
//  week4Classwork
//
//  Created by Zhao Hanyu on 19/02/2017.
//
//

#include "circles.hpp"
ofFbo fbo1,spFbo;

circle::circle(){
    fbo1.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F); // higher precision alpha (no artifacts)
    spFbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F);   // not doing any blending here.  no alpha needed
    
    fbo1.begin();
    ofClear(255,255,255, 0);
    fbo1.end();
    
    spFbo.begin();
    ofClear(255,255,255, 0);
    spFbo.end();

    
    catchUpSpeed = ofRandom(0.03f,0.06f);

}

void circle::update(){
}

int mouseX = 0;
int mouseY = 0;

void circle::draw(){
    
    fbo1.begin();
    ofSetColor(0,0,0, 10); // background color with alpha  / change color for halo effect
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    ofFill();
    ofSetColor(240, 68, 37);
    ofDrawCircle(pos.x, pos.y, 20);
    fbo1.end();
    
    spFbo.begin();  // write the existing fbo to the scratchpad but a bit smaller
    ofSetColor(255,255,255);  // always set the color before drawing the fbo
    fbo1.draw(1,1, ofGetWidth() + ofRandom(0,5), ofGetHeight() + ofRandom(0,5));
    spFbo.end();
    
    fbo1 = spFbo;    // write the scratchpad back to the original
    
    ofSetColor(255,255,255);  // always set the color before drawing the fbo
    fbo1.draw(0,0);

}

void circle::zenoToPoint1(float catchX, float catchY){
    
if (catchX > ofGetWidth()/4 && catchX < 1024 - ofGetWidth()/4 && catchY > ofGetHeight()/4 && catchY < 768 - ofGetHeight()/4) {
    pos.x =  ofRandom(0,1) * 2 + pos.x;
    pos.y =  ofRandom(0,1) * 2 + pos.y;

    
      
  
    
    
}else{
  pos.x = catchUpSpeed * catchX + (1 - catchUpSpeed)* pos.x;
  pos.y = catchUpSpeed * catchY + (1 - catchUpSpeed)* pos.y;
   }
    

    
}

void circle::mouseMoved(int x, int y){
    mouseX = x;
    mouseY = y;
}



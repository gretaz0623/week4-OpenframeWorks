//
//  Triangle.cpp
//  week4Classwork
//
//  Created by Zhao Hanyu on 19/02/2017.
//
//

#include "Triangle.hpp"
//ofFbo fbo2;

triangle::triangle(){



//    fbo2.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F);  // higher precision alpha (no artifacts)
//    
//    fbo2.begin();
//    ofClear(255,255,255, 0);
//    fbo2.end();
    
    pos.x = ofRandom(0, ofGetWidth());
    pos.y = ofRandom(0, ofGetHeight());
    
    speedX = 1;
    speedY = 1;


}

void triangle::update(){
    if( pos.x < 0){
        pos.x = 0;
        speedX *= -1;
    }else if (pos.x > ofGetWidth()){
        pos.x = ofGetWidth();
        speedX *= -1;
        
    }
    
    
    if( pos.y < 0){
        pos.y = 0;
        speedY *= -1;
    }else if (pos.y > ofGetHeight()){
        
        pos.y = ofGetHeight();
        speedY *= -1;
        }

    
    toPoint(ofRandom(0,1));
   
    
    
}

void triangle::draw(){
    
//    fbo2.begin();
//    ofSetColor(30, 30, 30, 2); // black with alpha
//    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    ofFill();
    ofSetColor(249, 204, 0);
    ofDrawTriangle(pos.x, pos.y, pos.x + 15, pos.y + 30, pos.x - 15, pos.y + 30);
//    fbo2.end();
    
//    ofSetColor(ofRandom(200,255),ofRandom(200,255),ofRandom(200,255));
//    fbo2.draw(0,0);
    



}

void triangle::toPoint(float speed){
    pos.x = speedX * speed * 2 + pos.x;
    pos.y = speedY * speed * 2 + pos.y;
}



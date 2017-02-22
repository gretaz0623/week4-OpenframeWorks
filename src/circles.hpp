//
//  circles.hpp
//  week4Classwork
//
//  Created by Zhao Hanyu on 19/02/2017.
//
//

#ifndef circles_hpp
#define circles_hpp

#include <stdio.h>
#include "ofMain.h"

class circle{
    public:
        circle();
        void draw();
        void update();
        void zenoToPoint1(float catchX, float catchY);
        void mouseMoved(int x, int y );
        ofPoint pos;
        float catchUpSpeed;
        float speedY;
        float speedX;
    
    };

#endif /* circles_hpp */

//
//  Triangle.hpp
//  week4Classwork
//
//  Created by Zhao Hanyu on 19/02/2017.
//
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include "ofMain.h"

class triangle {
    public:
    
    triangle();
    void draw();
    void update();
    void toPoint(float speed);
    
    ofPoint pos;
    float speedY;
    float speedX;
    


};
#endif /* Triangle_hpp */

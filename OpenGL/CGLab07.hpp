//
//  CGLab07.hpp
//  OpenGL
//
//  Created by Yong Lian Hii on 21/12/2015.
//  Copyright © 2015 Yong Lian Hii. All rights reserved.
//

#ifndef CGLab07_hpp
#define CGLab07_hpp

#include <stdio.h>
namespace CGLab07 {
    class MyArrows {
    public:
        void drawArrow();
        void draw1();
        void draw2();
        void draw3();
        void draw4();
        void draw5();
        void draw6();
        void draw7();
        void draw8();
    };
    class MyQuadricDemo{
    public:
        void draw();
    };
    class MySnowman {
    public:
        void draw();
    };
    class MyVirtualWorld
    {
    public:
        MyArrows myArrows;
        MyQuadricDemo myQuadricDemo;
        MySnowman mySnowman;
        void draw()
        {
            mySnowman.draw();
        }
        void tickTime()
        {
        }
        void init()
        {
        }
    };
}
#endif /* CGLab07_hpp */

//
//  CGLab08.hpp
//  OpenGL
//
//  Created by Yong Lian Hii on 21/12/2015.
//  Copyright © 2015 Yong Lian Hii. All rights reserved.
//

#ifndef CGLab08_hpp
#define CGLab08_hpp

#include <GLUT/GLUT.h>
namespace CGLab08 {
    class MyLego
    {
    public:
        MyLego();
        ~MyLego();
        void draw();
        //functions to draw Lego pieces
        void draw2x2Lego();
        void draw2x4Lego();
        void draw4x4Lego();
        void draw2x8Lego();
        void draw8x8Lego();
        void draw1();
        void draw2();
        void drawOneTower();
        void drawTowers();
    private:
        //bulding blocks for the basic Lego piece
        void drawTopCylinders();
        void drawBottomCylinder();
        void drawCube();
        GLUquadricObj *pObj;
    };
    
    class MyVirtualWorld
    {
    public:
        void draw()
        {
        }
        void tickTime()
        {
        }
        void init()
        {
        }
    };
}

#endif /* CGLab08_hpp */

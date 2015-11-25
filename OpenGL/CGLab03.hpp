//
//  CGLab03.hpp
//  OpenGL
//
//  Created by Yong Lian Hii on 25/11/2015.
//  Copyright © 2015 Yong Lian Hii. All rights reserved.
//

#ifndef CGLab03_hpp
#define CGLab03_hpp

/*
 TGD2151 Computer Graphics Fundamentals
 Faculty of Computing & Informatics, Multimedia University
 CGLab03.hpp
 Objective: Header File for Lab01 on triangles */
#include "CGLabmain.hpp"
namespace CGLab03 {
    class MyTriangles
    {
    public:
        void draw();
    };
    //------------------------------------
    //the main program will call methods from this class class MyVirtualWorld
    class MyVirtualWorld
    {
    public:
        MyTriangles mytriangles;
        void draw()
        {
            mytriangles.draw();
        }
        void tickTime()
        {
        };
            //do nothing, reserved for doing animation }
            //for any one-time only initialization of the
            // virtual world before any rendering takes place
            //   BUT after OpenGL has been initialized
        void init()
        {
        };
    };
}
#endif /* CGLab03_hpp */

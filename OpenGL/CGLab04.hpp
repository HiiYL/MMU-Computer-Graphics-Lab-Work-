//
//  CGLab04.hpp
//  OpenGL
//
//  Created by Yong Lian Hii on 25/11/2015.
//  Copyright © 2015 Yong Lian Hii. All rights reserved.
//

#ifndef CGLab04_hpp
#define CGLab04_hpp

#include <stdio.h>
namespace CGLab04 {
    class MyRoom
    {
    public:
        void draw();
        void drawWalls();
        void drawTable();
        void drawDustbin();
        void drawShelves();
    };
    //------------------------------------
    //the main program will call methods from this class class MyVirtualWorld
    class MyVirtualWorld
    {
    public:
        MyRoom myroom;
        void draw()
        {
            myroom.draw();
        }
        void tickTime()
        {
            //do nothing, reserved for doing animation }
            //for any one-time only initialization of the
            // virtual world before any rendering takes place
            //   BUT after OpenGL has been initialized
        };
        void init()
        {
        }
    }; //end of namespace CGLab04
}

#endif /* CGLab04_hpp */

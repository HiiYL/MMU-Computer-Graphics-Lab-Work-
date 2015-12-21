//
//  CGLab06.hpp
//  OpenGL
//
//  Created by Yong Lian Hii on 21/12/2015.
//  Copyright © 2015 Yong Lian Hii. All rights reserved.
//

#ifndef CGLab06_hpp
#define CGLab06_hpp

#include <stdio.h>
namespace CGLab06 {
    //class declaration
    class MyUmbrella
    {
    public:
        void draw();
    };
    class MyMMU
    {
    public:
        void draw();
        void draw2();

    };
    class MyBox
    {
    public:
        void draw();
        
    };
    class MyDiamond
    {
    public:
        void draw();
        
    };
    
    //------------------------------------
    //the main program will call methods from this class
    class MyVirtualWorld
    {
    public:
        //create an instance of the MyUmbrella class
        MyUmbrella myumbrella;
        MyMMU myMMU;
        MyBox myBox;
        MyDiamond myDiamond;
        void draw() {
            //call the draw() function of MyUmbrella class
//            myumbrella.draw();
//            myBox.draw();
            myDiamond.draw();
        }
        void tickTime()
        {
            //do nothing, reserved for doing animation
        }
            //for any one-time only initialization of the
            // virtual world before any rendering takes place
            //   BUT after OpenGL has been initialized
        void init()
        {
        }
    };
};

#endif /* CGLab06_hpp */

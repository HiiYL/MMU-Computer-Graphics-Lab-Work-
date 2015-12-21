//
//  CGLab05.hpp
//  OpenGL
//
//  Created by Yong Lian Hii on 09/12/2015.
//  Copyright © 2015 Yong Lian Hii. All rights reserved.
//

#ifndef CGLab05_hpp
#define CGLab05_hpp

#include "CGLabmain.hpp"
namespace CGLab05 {
    class MyStar
    {
    public:
        void draw();
    };
    class MyBoundingBox
    {
    public:
        MyBoundingBox( GLfloat xcenter, GLfloat ycenter, GLfloat zcenter,
                      GLfloat xdim, GLfloat ydim, GLfloat zdim )
        {
            GLfloat xdimhalf = xdim/2.0;
            GLfloat ydimhalf = ydim/2.0;
            GLfloat zdimhalf = zdim/2.0;
            y[0] = ycenter + ydimhalf;
            y[1] = y[2] = y[3] = y[0];  //top
            y[4] = ycenter - ydimhalf;
            y[7] = y[6] = y[5] = y[4];  //bottom
            x[1] = xcenter + xdimhalf;
            x[6] = x[5] = x[2] = x[1];  //right
            x[0] = xcenter - xdimhalf;
            x[7] = x[4] = x[3] = x[0];  //left
            z[0] = zcenter + zdimhalf;
            z[5] = z[4] = z[1] = z[0];  //front
            z[2] = zcenter - zdimhalf;
            z[7] = z[6] = z[3] = z[2];  //back
        }
        void draw();
    private:
        GLfloat x[8], y[8], z[8]; //(x,y,z) of 8 corner points
    };
    class MyPoints
    {
    public:
        void draw();
    };

    //------------------------------------
    //the main program will call methods from this class
    class MyVirtualWorld
    {
    public:
        MyStar mystar;
        MyBoundingBox myboundingbox;
        MyPoints mypoints;
        MyVirtualWorld()
        : myboundingbox(0.0, 0.0, 0.0, 40.0, 40.0, 40.0)
        {
        }
        void draw()
        {
            mystar.draw();
            myboundingbox.draw();
            mypoints.draw();
        }
        void tickTime()
        {
            //do nothing, reserved for doing animation }
            //for any one-time only initialization of the
        }
        // virtual world before any rendering takes place
        //   BUT after OpenGL has been initialized
        void init()
        {
        }
    };

}; //end of namespace CGLab05

#endif /* CGLab05_hpp */

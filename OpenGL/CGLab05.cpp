//
//  CGLab05.cpp
//  OpenGL
//
//  Created by Yong Lian Hii on 09/12/2015.
//  Copyright © 2015 Yong Lian Hii. All rights reserved.
//

#include "CGLab05.hpp"
#include <GLUT/glut.h>

#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace CGLab05;


void MyStar::draw()
{
    
    
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(6, 0x3cff);
    //3 is a stipple multiplier factor
    //0x3cff (is 00111100 11111111 in binary) is stipple pattern

    glLineWidth(5.0); //set the line thickness
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-10.0,  5.0, 0.0);
    glVertex3f( 10.0,  5.0, 0.0);
    
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f( 10.0,  5.0, 0.0);
    glVertex3f(-10.0,-10.0, 0.0);
    
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-10.0,-10.0, 0.0);
    glVertex3f(  0.0, 10.0, 0.0);
    
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(  0.0, 10.0, 0.0);
    glColor3f(1.0, 0.0, 1.0);
    glVertex3f( 10.0,-10.0, 0.0);
    
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f( 10.0,-10.0, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-10.0,  5.0, 0.0);
    glEnd();
    glDisable(GL_LINE_STIPPLE);
}
void MyBoundingBox::draw()
{
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(x[0], y[0], z[0] );
    glVertex3f(x[1], y[1], z[1] );
    
    glVertex3f(x[1], y[1], z[1] );
    glVertex3f(x[2], y[2], z[2] );
    
    glVertex3f(x[2], y[2], z[2] );
    glVertex3f(x[3], y[3], z[3] );
    
    glVertex3f(x[3], y[3], z[3] );
    glVertex3f(x[0], y[0], z[0] );
    
    glVertex3f(x[4], y[4], z[4] );
    glVertex3f(x[5], y[5], z[5] );
    
    glVertex3f(x[5], y[5], z[5] );
    glVertex3f(x[6], y[6], z[6] );
    
    glVertex3f(x[6], y[6], z[6] );
    glVertex3f(x[7], y[7], z[7] );
    
    glVertex3f(x[7], y[7], z[7] );
    glVertex3f(x[4], y[4], z[4] );
    
    glVertex3f(x[0], y[0], z[0] );
    glVertex3f(x[4], y[4], z[4] );
    
    glVertex3f(x[1], y[1], z[1] );
    glVertex3f(x[5], y[5], z[5] );
    
    glVertex3f(x[2], y[2], z[2] );
    glVertex3f(x[6], y[6], z[6] );
    
    glVertex3f(x[3], y[3], z[3] );
    glVertex3f(x[7], y[7], z[7] );

    for (int i = 0; i <= 3; i++) {
        GLfloat temp_z = z[2] + ((z[0] - z[2]) * i/3);

        for (int j = 0; j <= 3; j++) {
            glColor3f(0.0, 1.0, 0.0);
            GLfloat temp_y = y[4] + ((y[2]-y[4]) * j/3);
            glVertex3f(x[0],temp_y, temp_z);
            glVertex3f(x[1], temp_y, temp_z);
            
            for (int k = 0; k <= 3; k++) {
                GLfloat temp_x = x[0] + ((x[1]-x[0]) * k/3);
                glColor3f(1.0, 0.0, 0.0);
                glVertex3f(temp_x,temp_y, z[7]);
                glVertex3f(temp_x, temp_y, z[4]);
            }
        }
        for (int k = 0; k <= 3; k++) {
            glColor3f(0.0, 0.0, 1.0);
            GLfloat temp_x = x[0] + ((x[1]-x[0]) * k/3);
            glVertex3f(temp_x,y[2], temp_z);
            glVertex3f(temp_x, y[4], temp_z);
            
        }
    }
    
    
    glEnd();
}
//
//  CGLab04.cpp
//  OpenGL
//
//  Created by Yong Lian Hii on 25/11/2015.
//  Copyright © 2015 Yong Lian Hii. All rights reserved.
//

#include "CGLab04.hpp"
#include <GLUT/glut.h>

using namespace CGLab04;
void MyRoom::draw()
{
    drawWalls();
    drawTable();
    drawDustbin();
    drawShelves();
}
void MyRoom::drawWalls()
{
    glDisable(GL_CULL_FACE); //this is needed
    glBegin(GL_QUADS); //back wall
    glColor3f(0.5f, 0.1f, 0.3f );
    glVertex3f(-25.1f, 15.1f, -5.1f );
    glVertex3f(-25.1f, -0.1f, -5.1f );
    glVertex3f( 25.1f, -0.1f, -5.1f );
    glVertex3f( 25.1f, 15.1f, -5.1f );
    //left wall
    glColor3f(0.5f, 0.1f, 0.8f );
    glVertex3f(-25.1f, 15.1f, 15.1f );
    glVertex3f(-25.1f, -0.1f, 15.1f );
    glColor3f(0.3f, 0.8f, 0.1f );
    glVertex3f(-25.1f, -0.1f, -5.1f );
    glVertex3f(-25.1f, 15.1f, -5.1f );
    //floor
    // fill this up to draw the floor
    glEnd();
    glEnable(GL_CULL_FACE); //restore to
    // fill this up later
}
void MyRoom::drawTable()
{
    glDisable(GL_CULL_FACE); //disable this while creating the object //remember : specify in counter-clock-wise
    //do incrementally
    glBegin(GL_QUADS);
    //table top
    //top
    glColor3f(1.0f, 1.0f, 0.5f );
    glVertex3f( -10.0f,  7.0f,  5.0f );
    glVertex3f(  10.0f,  7.0f,  5.0f );
    glVertex3f(  10.0f,  7.0f, -5.0f );
    glVertex3f( -10.0f,  7.0f, -5.0f );
    //bottom
    glVertex3f( -10.0f,  6.0f,  5.0f );
    glVertex3f( -10.0f,  6.0f, -5.0f );
    glVertex3f(  10.0f,  6.0f, -5.0f );
    glVertex3f(  10.0f,  6.0f,  5.0f );
    //front
    glVertex3f( -10.0f,  7.0f,  5.0f );
    glVertex3f( -10.0f,  6.0f,  5.0f );
    glVertex3f(  10.0f,  6.0f,  5.0f );
    glVertex3f(  10.0f,  7.0f,  5.0f );
    //back
    glVertex3f( -10.0f,  7.0f, -5.0f );
    glVertex3f(  10.0f,  7.0f, -5.0f );
    glVertex3f(  10.0f,  6.0f, -5.0f );
    glVertex3f( -10.0f,  6.0f, -5.0f );
    //table left leg
    //left
    glColor3f(0.5f, 0.5f, 1.0f );
    glVertex3f( -11.0f,  7.0f, -5.0f );
    glVertex3f( -11.0f,  0.0f, -5.0f );
    glVertex3f( -11.0f,  0.0f,  5.0f );
    glVertex3f( -11.0f,  7.0f,  5.0f );
    //right
    glVertex3f( -10.0f,  7.0f, -5.0f );
    glVertex3f( -10.0f,  7.0f,  5.0f );
    glVertex3f( -10.0f,  0.0f,  5.0f );
    glVertex3f( -10.0f,  0.0f, -5.0f );
    //front
    glColor3f(0.0f, 0.0f, 1.0f );
    glVertex3f( -11.0f,  7.0f,  5.0f );
    glVertex3f( -11.0f,  0.0f,  5.0f );
    glVertex3f( -10.0f,  0.0f,  5.0f );
    glVertex3f( -10.0f,  7.0f,  5.0f );
    //back
    glVertex3f( -11.0f,  7.0f, -5.0f );
    glVertex3f( -10.0f,  7.0f, -5.0f );
    glVertex3f( -10.0f,  0.0f, -5.0f );
    glVertex3f( -11.0f,  0.0f, -5.0f );
    //top
    glVertex3f( -11.0f,  7.0f, -5.0f );
    glVertex3f( -11.0f,  7.0f,  5.0f );
    glVertex3f( -10.0f,  7.0f,  5.0f );
    glVertex3f( -10.0f,  7.0f, -5.0f );
    //bottom
    glVertex3f( -11.0f,  0.0f, -5.0f );
    glVertex3f( -10.0f,  0.0f, -5.0f );
    glVertex3f( -10.0f,  0.0f,  5.0f );
    glVertex3f( -11.0f,  0.0f,  5.0f );
    
    //table right leg
    //left
    glColor3f(0.5f, 0.5f, 1.0f );
    glVertex3f( 11.0f,  7.0f, -5.0f );
    glVertex3f( 11.0f,  0.0f, -5.0f );
    glVertex3f( 11.0f,  0.0f,  5.0f );
    glVertex3f( 11.0f,  7.0f,  5.0f );
    //right
    glVertex3f( 10.0f,  7.0f, -5.0f );
    glVertex3f( 10.0f,  7.0f,  5.0f );
    glVertex3f( 10.0f,  0.0f,  5.0f );
    glVertex3f( 10.0f,  0.0f, -5.0f );
    //front
    glColor3f(0.0f, 0.0f, 1.0f );
    glVertex3f( 11.0f,  7.0f,  5.0f );
    glVertex3f( 11.0f,  0.0f,  5.0f );
    glVertex3f( 10.0f,  0.0f,  5.0f );
    glVertex3f( 10.0f,  7.0f,  5.0f );
    //back
    glVertex3f( 11.0f,  7.0f, -5.0f );
    glVertex3f( 10.0f,  7.0f, -5.0f );
    glVertex3f( 10.0f,  0.0f, -5.0f );
    glVertex3f( 11.0f,  0.0f, -5.0f );
    //top
    glVertex3f( 11.0f,  7.0f, -5.0f );
    glVertex3f( 11.0f,  7.0f,  5.0f );
    glVertex3f( 10.0f,  7.0f,  5.0f );
    glVertex3f( 10.0f,  7.0f, -5.0f );
    //bottom
    glVertex3f( 11.0f,  0.0f, -5.0f );
    glVertex3f( 10.0f,  0.0f, -5.0f );
    glVertex3f( 10.0f,  0.0f,  5.0f );
    glVertex3f( 11.0f,  0.0f,  5.0f );
    // fill this up to complete the table
    glEnd();
    glEnable(GL_CULL_FACE); //restore to default
    // fill this up later
}
void MyRoom::drawDustbin()
{
    glDisable(GL_CULL_FACE); //disable this while creating the object //remember : specify in counter-clock-wise
    //do incrementally
    glBegin(GL_QUADS);
    
    //dustbin
    //top

//    glVertex3f( 13.0f,  3.0f,  2.5f );
//    glVertex3f(  12.0f,  3.0f,  2.5f );
//    glVertex3f(  12.0f,  3.0f, -5.0f );
//    glVertex3f( 13.0f,  3.0f, -5.0f );
    //bottom
//    glVertex3f( 14.0f,  0.0f,  5.0f );
//    glVertex3f(  13.0f,  0.0f,  5.0f );
//    glVertex3f(  13.0f,  0.0f, -5.0f );
//    glVertex3f( 14.0f,  0.0f, -5.0f );
    //left
    glColor3f(1.0f, 0.0f, 0.0f );
    glVertex3f( 14.0f,  0.0f,  -1.0f );
    glVertex3f(  13.0f,  5.0f,  0.0f );
    glVertex3f(  13.0f,  5.0f, -5.0f );
    glVertex3f( 14.0f,  0.0f, -4.0f );
    //back
    glColor3f(0.5f, 0.5f, 0.5f );
    glVertex3f( 18.0f,  0.0f,  -4.0f );
    glVertex3f(  19.0f,  5.0f,  -5.0f );
    glVertex3f(  13.0f,  5.0f, -5.0f );
    glVertex3f( 14.0f,  0.0f, -4.0f );
    //right
    glColor3f(1.0f, 0.0f, 0.0f );
    glVertex3f( 18.0f,  0.0f,  -1.0f );
    glVertex3f(  19.0f,  5.0f,  0.0f );
    glVertex3f(  19.0f,  5.0f, -5.0f );
    glVertex3f( 18.0f,  0.0f, -4.0f );
    //front
    glColor3f(0.5f, 0.5f, 0.5f );
    glVertex3f( 18.0f,  0.0f,  -1.0f );
    glVertex3f(  19.0f,  5.0f,  0.0f );
    glVertex3f(  13.0f,  5.0f, 0.0f );
    glVertex3f( 14.0f,  0.0f, -1.0f );
    //bottom
    glVertex3f( 14.0f,  0.0f,  -1.0f );
    glVertex3f(  14.0f,  0.0f,  -5.0f );
    glVertex3f(  18.0f,  0.0f, -4.0f );
    glVertex3f( 18.0f,  0.0f, -1.0f );

    glEnd();
    glEnable(GL_CULL_FACE); //restore to default
    // fill this up later
}
void MyRoom::drawShelves()
{
    
    
    glDisable(GL_CULL_FACE); //this is needed
    glBegin(GL_POLYGON); glColor3f(1.0f, 1.0f, 0.2f ); glVertex3f( -25.0f, 2.0f, -5.0f ); glVertex3f( -25.0f, 2.0f, 3.0f ); glVertex3f( -21.0f, 2.0f, 3.0f ); glVertex3f( -17.0f, 2.0f, -1.0f ); glVertex3f( -17.0f, 2.0f, -5.0f );
    glEnd();
    glBegin(GL_POLYGON); glColor3f(0.1f, 0.0f, 1.0f ); glVertex3f( -25.0f, 5.0f, -5.0f ); glVertex3f( -25.0f, 5.0f, 3.0f ); glVertex3f( -21.0f, 5.0f, 3.0f ); glVertex3f( -17.0f, 5.0f, -1.0f ); glVertex3f( -17.0f, 5.0f, -5.0f );
    glEnd();
    // fill this up to complete the shelves
    glEnable(GL_CULL_FACE);
    // fill this up later
}



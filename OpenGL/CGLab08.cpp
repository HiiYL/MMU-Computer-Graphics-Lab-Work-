//
//  CGLab08.cpp
//  OpenGL
//
//  Created by Yong Lian Hii on 21/12/2015.
//  Copyright © 2015 Yong Lian Hii. All rights reserved.
//

#include "CGLab08.hpp"

using namespace CGLab08;
MyLego::MyLego()
{
    //Setup Quadric Object
    pObj = gluNewQuadric();
    gluQuadricNormals(pObj,GLU_SMOOTH);
}
MyLego::~MyLego()
{
  gluDeleteQuadric(pObj);
}
void MyLego::draw()
{
    glDisable(GL_CULL_FACE);
      //remark and un-remark accordingly to run the
      // various testing functions as you build them draw1();
      draw2();
      glColor3f(1.0f, 1.0f, 1.0f);
      draw2x2Lego();
      draw2x4Lego();
      draw4x4Lego();
      draw2x8Lego();
      draw8x8Lego();
      drawOneTower();
      drawTowers();
      glEnable(GL_CULL_FACE);
      }
      //draw a lego piece with dimension 2.0 x 1.0 x 2.0, // the bottom center of the lego piece is at 0,0,0
    void MyLego::drawCube()
    {
        GLfloat dimx = 2.0, dimy = 1.0, dimz = 2.0;
        GLfloat xmax = dimx/2.0;
        GLfloat xmin = -xmax;
        GLfloat ymax = dimy;
        GLfloat ymin = 0;
        GLfloat zmax = dimz/2.0;
        GLfloat zmin = -zmax;
        //Box
        glBegin(GL_QUADS);
        //front
        glVertex3f(xmin,ymax,zmax);
        glVertex3f(xmin,ymin,zmax);
        glVertex3f(xmax,ymin,zmax);
        glVertex3f(xmax,ymax,zmax);
        //back
        glVertex3f(xmin,ymax,zmin);
        glVertex3f(xmax,ymax,zmin);
        glVertex3f(xmax,ymin,zmin);
        glVertex3f(xmin,ymin,zmin);
        //right
        glVertex3f(xmax,ymax,zmax);
        glVertex3f(xmax,ymin,zmax);
        glVertex3f(xmax,ymin,zmin);
        glVertex3f(xmax,ymax,zmin);
        //left
        glVertex3f(xmin,ymax,zmax);
        glVertex3f(xmin,ymax,zmin); glVertex3f(xmin,ymin,zmin); glVertex3f(xmin,ymin,zmax); //top glVertex3f(xmin,ymax,zmax); glVertex3f(xmax,ymax,zmax); glVertex3f(xmax,ymax,zmin); glVertex3f(xmin,ymax,zmin); //bottom glVertex3f(xmin,ymin+0.2,zmax); glVertex3f(xmax,ymin+0.2,zmax); glVertex3f(xmax,ymin+0.2,zmin); glVertex3f(xmin,ymin+0.2,zmin);
        glEnd();
    }
      void MyLego::drawBottomCylinder() {
          // fill later...
      }
                      

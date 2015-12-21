//
//  CGLab07.cpp
//  OpenGL
//
//  Created by Yong Lian Hii on 21/12/2015.
//  Copyright © 2015 Yong Lian Hii. All rights reserved.
//

#include "CGLab07.hpp"
#include <GLUT/glut.h>
using namespace CGLab07;
void MyArrows::drawArrow() {
    glBegin(GL_TRIANGLES);
    glVertex3f( 0.0f, 15.0f, 0.0f);
    glVertex3f(-2.0f, 13.0f, 0.0f);
    glVertex3f( 2.0f, 13.0f, 0.0f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3f(-1.0f, 13.0f, 0.0f);
    glVertex3f(-1.0f,  0.0f, 0.0f);
    glVertex3f( 1.0f,  0.0f, 0.0f);
    glVertex3f( 1.0f, 13.0f, 0.0f);
    glEnd();
}
void MyArrows::draw1()
{
    glDisable(GL_CULL_FACE);
    
    glColor3f(1.0, 0.0, 0.0);
    drawArrow();
    
    glTranslatef(-10.0f, 0.0f, 0.0f);
    glColor3f(0.0, 1.0, 0.0);
    drawArrow();
    
    glTranslatef( 0.0f, 0.0f,-10.0f);
    glColor3f(0.0, 0.0, 1.0);
    drawArrow();
    
    glTranslatef( 10.0f, 0.0f, 0.0f);
    glColor3f(1.0, 1.0, 0.0);
    drawArrow();
    
    glEnable(GL_CULL_FACE);
}
void MyArrows::draw2()
{
    glDisable(GL_CULL_FACE);
    glColor3f(1.0, 0.0, 0.0);
    drawArrow();
    glPushMatrix();
    glTranslatef(-10.0f, 0.0f, 0.0f);
    glColor3f(0.0, 1.0, 0.0);
    drawArrow();
    glPopMatrix();
    glPushMatrix();
    glTranslatef( 0.0f, 0.0f,-10.0f);
    glColor3f(0.0, 0.0, 1.0);
    drawArrow();
    glPopMatrix();
    glPushMatrix();
    glTranslatef( 10.0f, 0.0f, 0.0f);
    glColor3f(1.0, 1.0, 0.0);
    drawArrow();
    glPopMatrix();
    glEnable(GL_CULL_FACE);
}
void MyArrows::draw3()
{
    glDisable(GL_CULL_FACE);
    glColor3f(1.0, 0.0, 0.0);
    drawArrow();
    glRotatef(30.0f, 0.0f, 0.0f, 1.0f);
    glColor3f(0.0, 1.0, 0.0);
    drawArrow();
    glRotatef(60.0f, 0.0f, 0.0f, 1.0f);
    glColor3f(0.0, 0.0, 1.0);
    drawArrow();
    glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
    glColor3f(1.0, 1.0, 0.0);
    drawArrow();
    glEnable(GL_CULL_FACE);
}

void MyArrows::draw4()
{
    glDisable(GL_CULL_FACE);
    glColor3f(1.0, 0.0, 0.0);
    drawArrow();
    glPushMatrix();
    glRotatef(30.0f, 0.0f, 0.0f, 1.0f);
    glColor3f(0.0, 1.0, 0.0);
    drawArrow();
    glPopMatrix();
    glPushMatrix();
    glRotatef(60.0f, 0.0f, 0.0f, 1.0f);
    glColor3f(0.0, 0.0, 1.0);
    drawArrow();
    glPopMatrix();
    glPushMatrix();
    glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
    glColor3f(1.0, 1.0, 0.0);
    drawArrow();
    glPopMatrix();
    glEnable(GL_CULL_FACE);
}
void MyArrows::draw5()
{
    glDisable(GL_CULL_FACE);
    glColor3f(1.0, 0.0, 0.0);
    drawArrow();
    glPushMatrix();
    glTranslatef(-10.0f, 0.0f, 0.0f);
    glRotatef(30.0f, 0.0f, 0.0f, 1.0f);
    glColor3f(0.0, 1.0, 0.0);
    drawArrow();
    glPopMatrix();
    glPushMatrix();
    glTranslatef( 0.0f, 0.0f,-10.0f);
    glRotatef(60.0f, 0.0f, 0.0f, 1.0f);
    glColor3f(0.0, 0.0, 1.0);
    drawArrow();
    glPopMatrix();
    glPushMatrix();
    glTranslatef( 10.0f, 0.0f, 0.0f);
    glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
    glColor3f(1.0, 1.0, 0.0);
    drawArrow();
    glPopMatrix();
    glEnable(GL_CULL_FACE);
}
void MyArrows::draw6()
{
    glDisable(GL_CULL_FACE);
    glColor3f(1.0, 0.0, 0.0);
    drawArrow();
    glPushMatrix();
    glRotatef(30.0f, 0.0f, 0.0f, 1.0f);
    glTranslatef(-10.0f, 0.0f, 0.0f);
    glColor3f(0.0, 1.0, 0.0);
    drawArrow();
    glPopMatrix();
    glPushMatrix();
    glRotatef(60.0f, 0.0f, 0.0f, 1.0f);
    glTranslatef( 0.0f, 0.0f,-10.0f);
    glColor3f(0.0, 0.0, 1.0);
    drawArrow();
    glPopMatrix();
    glPushMatrix();
    glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
    glTranslatef( 10.0f, 0.0f, 0.0f);
    glColor3f(1.0, 1.0, 0.0);
    drawArrow();
    glPopMatrix();
    glEnable(GL_CULL_FACE);
}
void MyArrows::draw7()
{
    glDisable(GL_CULL_FACE);
    const int ARROW_COUNT = 40;
    for (int i = 0; i < ARROW_COUNT; i++) {
        glRotatef((float)i * (360/ARROW_COUNT), 0.0f, 0.0f, 1.0f);
        drawArrow();
    }

    
    glEnable(GL_CULL_FACE);
}
void MyArrows::draw8()
{
    glDisable(GL_CULL_FACE);
    const int ARROW_COUNT = 40;
    for (int i = 0; i < ARROW_COUNT; i++) {
        glColor3f(0.0, (float)i/ARROW_COUNT, 1 - (float)i/ARROW_COUNT);
        glRotatef((float)i * (360/ARROW_COUNT), 0.0f, 0.0f, 1.0f);
        glPushMatrix();
        glTranslatef(0.0f, 5.0f, 0.0f);
        drawArrow();
        glPopMatrix();
    }
    
    
    glEnable(GL_CULL_FACE);
}
void MyQuadricDemo::draw()
{
    glEnable(GL_LIGHTING);
    glDisable(GL_CULL_FACE);
    //Quadric Object
    GLUquadricObj *pObj;
    //create and initialize quadric
    pObj = gluNewQuadric();
    //try one of these drawing style //gluQuadricDrawStyle(pObj, GLU_FILL); //gluQuadricDrawStyle(pObj, GLU_LINE); //gluQuadricDrawStyle(pObj, GLU_POINT); //gluQuadricDrawStyle(pObj, GLU_SILHOUETTE);
    //try one of these surface normals mode //gluQuadricNormals(pObj, GLU_NONE); gluQuadricNormals(pObj, GLU_SMOOTH); //gluQuadricNormals(pObj, GLU_FLAT);
    glPushMatrix();
    glColor3f(1.0f, 1.0f, 1.0f);
    glTranslatef(-40.0f, 0.0f, 0.0f);
    gluCylinder(pObj, 2.0f, 12.0f, 20.0f, 24, 72);
    glColor3f(1.0f, 1.0f, 0.0f);
    glTranslatef(20.0f, 0.0f, 0.0f);
    gluCylinder(pObj, 2.0f, 12.0f, 20.0f, 72, 4);
    glColor3f(0.0f, 1.0f, 0.0f);
    glTranslatef(14.0f, 0.0f, 0.0f);
    gluSphere(pObj, 8.0f, 24, 12);
    glColor3f(0.0f, 0.0f, 1.0f); glTranslatef(14.0f, 0.0f, 0.0f);
    gluSphere(pObj, 4.0f, 24, 12);
    glColor3f(1.0f, 0.0f, 0.0f); glTranslatef(14.0f, 0.0f, 0.0f); gluDisk(pObj, 4.0f, 10.0f, 26, 13);
    glColor3f(0.0f, 1.0f, 1.0f); glTranslatef(20.0f, 0.0f, 0.0f); gluDisk(pObj, 0.0f, 10.0f, 26, 13);
    glPopMatrix();
    //free the quadric object
    gluDeleteQuadric(pObj);
    glEnable(GL_CULL_FACE);
}
void MySnowman::draw() {
    glDisable(GL_CULL_FACE);
    glPushMatrix();
    GLUquadricObj *pObj;
    pObj = gluNewQuadric();

    glColor3f(1.0f, 1.0f, 1.0f);
    glTranslatef(0.0f, 6.0f, 0.0f);

    gluSphere(pObj, 6.0f, 24, 12);
    glTranslatef(0.0f, 8.0f, 0.0f);
    gluSphere(pObj, 4.0f, 24, 12);
    glTranslatef(0.0f, 6.0f, 0.0f);
    gluSphere(pObj, 3.0f, 24, 12);
    
    glPushMatrix();
    glColor3f(1.0f, 0.0f, 0.0f);
    glTranslatef(1.0f, 0.8f, 2.5f);
//    glTranslatef(0.0f, 0.0f, 0.0f);
    gluSphere(pObj, 1.0f, 24, 12);
    glTranslatef(-2.0f, 0.0f, 0.0f);
    gluSphere(pObj, 1.0f, 24, 12);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.0f, -1.0f, 0.0f);
    gluCylinder(pObj, 1.0f, 0.0f, 10.0f, 72, 4);
    glPopMatrix();
    
    
    glColor3f(0.0f, 1.0f, 1.0f);
    glTranslatef(0.0f, 12.0f, 0.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    gluCylinder(pObj, 3.0f, 3.0f, 10.0f, 72, 4);
    
    glPopMatrix();
    gluDeleteQuadric(pObj);
    glEnable(GL_CULL_FACE);
}
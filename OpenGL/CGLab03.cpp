//
//  CGLab03.cpp
//  OpenGL
//
//  Created by Yong Lian Hii on 25/11/2015.
//  Copyright © 2015 Yong Lian Hii. All rights reserved.
//

#include <GLUT/glut.h>
#include "CGLab03.hpp"

#define PI 3.14159265
using namespace CGLab03;
using namespace std;
void MyTriangles::draw()
{
    glDisable(GL_CULL_FACE);
    glBegin(GL_TRIANGLES);
    float prev_x = 15, prev_y = 0;
    float prev_x_trunk = 0, prev_y_trunk = 0;
    float NUMBER_OF_VECTOR = 50;
    float RADIUS = 15;
    float TRUNK_RADIUS = 2.5;
    
    for ( int i = 0; i <= NUMBER_OF_VECTOR ; i++) {
        float angleInDegrees = (float)i/NUMBER_OF_VECTOR * 360;
        float x = (float)(TRUNK_RADIUS * cos(angleInDegrees * PI / 180));
        float y = (float)(TRUNK_RADIUS * sin(angleInDegrees * PI / 180));
        
        float color_r = ((double) rand() / (RAND_MAX));
        float color_g = ((double) rand() / (RAND_MAX));
        float color_b = ((double) rand() / (RAND_MAX));
        cout << color_r << " " <<  color_g << " " << color_b << endl;
        
        glColor3f(color_r, color_g,color_b );  glVertex3f( 0.0f,  10.0f,  0.0f ); // trunk vector
        glColor3f(color_r, color_g,color_b); glVertex3f(prev_x_trunk, -5.0f, prev_y_trunk );
        glColor3f(color_r, color_g,color_b); glVertex3f(x, -5.0f, y );
        prev_x_trunk = x;
        prev_y_trunk = y;
    }
    
    for ( int i = 0; i <= NUMBER_OF_VECTOR ; i++) {
        float angleInDegrees = (float)i/NUMBER_OF_VECTOR * 360;
        float x = (float)(RADIUS * cos(angleInDegrees * PI / 180));
        float y = (float)(RADIUS * sin(angleInDegrees * PI / 180));
        
        float color_r = ((double) rand() / (RAND_MAX));
        float color_g = ((double) rand() / (RAND_MAX));
        float color_b = ((double) rand() / (RAND_MAX));
        cout << color_r << " " <<  color_g << " " << color_b << endl;
        
        glColor3f(color_r, color_g,color_b ); glVertex3f( 0.0f, 10.0f, 0.0f ); // first hat
        glColor3f(color_r, color_g,color_b); glVertex3f(prev_x, 5.0f, prev_y );
        glColor3f(color_r, color_g,color_b); glVertex3f(x, 5.0f, y );
        prev_x = x;
        prev_y = y;
    }
    glEnd();
    glEnable(GL_CULL_FACE);
}


//
//  CGLab06.cpp
//  OpenGL
//
//  Created by Yong Lian Hii on 21/12/2015.
//  Copyright © 2015 Yong Lian Hii. All rights reserved.
//

#include "CGLab06.hpp"
#include <GLUT/glut.h>
using namespace CGLab06;
void MyUmbrella::draw()
{
    glDisable(GL_CULL_FACE);
    glBegin(GL_TRIANGLE_FAN);
    
    //umbrella top
    glColor3f(1.0f, 0.0f, 0.0f );
    glVertex3f( 0.0f, 5.0f, 0.0f );
    glColor3f(0.0f, 0.5f, 0.1f );
    glVertex3f(-5.0f, 0.0f, 5.0f );
    glColor3f(1.0f, 0.5f, 0.5f );
    glVertex3f( 0.0f, 0.0f, 7.0f );
    glColor3f(1.0f, 1.0f, 0.0f );
    glVertex3f( 5.0f,  0.0f,  5.0f );
    glColor3f(1.0f, 1.0f, 0.0f );
    glVertex3f( 7.0f,  0.0f,  0.0f );
    glColor3f(0.0f, 1.0f, 1.0f );
    glVertex3f( 5.0f,  0.0f, -5.0f );
    glColor3f(0.0f, 0.0f, 1.0f );
    glVertex3f( 0.0f,  0.0f, -7.0f );
    glColor3f(1.0f, 0.0f, 1.0f );
    glVertex3f(-5.0f,  0.0f, -5.0f );
    glColor3f(1.5f, 0.5f, 0.0f );
    glVertex3f(-7.0f,  0.0f,  0.0f );
    glColor3f(0.0f, 0.5f, 0.1f );
    glVertex3f(-5.0f,  0.0f,  5.0f );
    
    
    //umbrella handle
    glColor3f(0.6f, 0.5f, 0.1f );
    glVertex3f( 0.0f,   5.0f,  0.0f );
    glColor3f(0.2f, 0.1f, 0.9f );
    glVertex3f(-1.0f, -10.0f,  1.0f );
    glColor3f(1.0f, 0.6f, 0.2f );
    glVertex3f( 1.0f, -10.0f,  1.0f );
    glColor3f(0.3f, 0.8f, 0.4f );
    glVertex3f( 1.0f, -10.0f, -1.0f );
    glColor3f(0.9f, 0.1f, 0.2f );
    glVertex3f(-1.0f, -10.0f, -1.0f );
    glColor3f(0.2f, 0.1f, 0.9f );
    glVertex3f(-1.0f, -10.0f,  1.0f );
    glEnd();
    glEnable(GL_CULL_FACE);
};
void MyMMU::draw()
{
    glDisable(GL_CULL_FACE);
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0f, 0.0f, 1.0f );
    glVertex3f(-15.0f, 0.0f, 0.0f );
    glVertex3f(-15.0f, 0.0f, 3.0f );
    glVertex3f(-15.0f, 8.0f, 0.0f );
    glVertex3f(-15.0f, 8.0f, 3.0f );
    
    glVertex3f(-10.0f, 5.0f, 0.0f );
    glVertex3f(-10.0f, 5.0f, 3.0f );
    glVertex3f( -5.0f, 8.0f, 0.0f );
    glVertex3f( -5.0f, 8.0f, 3.0f );
    
    glVertex3f( -5.0f, 0.0f, 0.0f );
    glVertex3f( -5.0f, 0.0f, 3.0f );
    glEnd();
    
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f );
    glVertex3f(0.0f, 0.0f, 0.0f );
    glVertex3f(0.0f, 0.0f, 3.0f );
    glVertex3f(0.0f, 8.0f, 0.0f );
    glVertex3f(0.0f, 8.0f, 3.0f );
    
    glVertex3f(5.0f, 5.0f, 0.0f );
    glVertex3f(5.0f, 5.0f, 3.0f );
    glVertex3f( 10.0f, 8.0f, 0.0f );
    glVertex3f( 10.0f, 8.0f, 3.0f );
    
    glVertex3f( 10.0f, 0.0f, 0.0f );
    glVertex3f( 10.0f, 0.0f, 3.0f );
    glEnd();
    
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f, 0.0f, 0.0f );
    
    glVertex3f(15.0f, 8.0f, 0.0f );
    glVertex3f(15.0f, 8.0f, 3.0f );
    glVertex3f(15.0f, 3.0f, 0.0f );
    glVertex3f(15.0f, 3.0f, 3.0f );
    
    glVertex3f(15.0f, 3.0f, 0.0f );
    glVertex3f(15.0f, 3.0f, 3.0f );
    glVertex3f(18.0f, 0.0f, 0.0f );
    glVertex3f(18.0f, 0.0f, 3.0f );
    
    glVertex3f(20.0f, 0.0f, 0.0f );
    glVertex3f(20.0f, 0.0f, 3.0f );
    glVertex3f(23.0f, 3.0f, 0.0f );
    glVertex3f(23.0f, 3.0f, 3.0f );
    
    glVertex3f(23.0f, 3.0f, 0.0f );
    glVertex3f(23.0f, 3.0f, 3.0f );
    glVertex3f(23.0f, 8.0f, 0.0f );
    glVertex3f(23.0f, 8.0f, 3.0f );
    glEnd();
    glEnable(GL_CULL_FACE);
};
void MyMMU::draw2()
{
    const int numOfVertices = 10;
    glDisable(GL_CULL_FACE);
    static GLfloat vertices[][3] =
    {
        {-15.0f, 0.0f, 0.0f },  // vertex 0
        {-15.0f, 0.0f, 3.0f },  // vertex 1
        {-15.0f, 8.0f, 0.0f },  // vertex 2
        {-15.0f, 8.0f, 3.0f },  // vertex 3
        {-10.0f, 5.0f, 0.0f },  // vertex 4
        {-10.0f, 5.0f, 3.0f },  // vertex 5
        { -5.0f, 8.0f, 0.0f },  // vertex 6
        { -5.0f, 8.0f, 3.0f },  // vertex 7
        { -5.0f, 0.0f, 0.0f },  // vertex 8
        { -5.0f, 0.0f, 3.0f }   // vertex 9
    };
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0f, 0.0f, 1.0f );
    for (int i=0; i<numOfVertices; ++i) {
        glVertex3fv ( vertices[i] );
    }
    glEnd();
    glEnable(GL_CULL_FACE);
}
void MyBox::draw() {
    static GLfloat vertices[][3] = {
        {-5.0f, -5.0f, 5.0f},
        { 5.0f, -5.0f, 5.0f},
        { 5.0f, -5.0f, -5.0f},
        {-5.0f, -5.0f, -5.0f},
        {-5.0f, 5.0f, 5.0f},
        { 5.0f, 5.0f, 5.0f},
        { 5.0f, 5.0f, -5.0f},
        {-5.0f,  5.0f, -5.0f}
    };
    //vertex indices of each polygon
    // vertex 0
    // vertex 1
    // vertex 2
    // vertex 3
    // vertex 4
    // vertex 5
    // vertex 6
    // vertex 7
    static int faces[] =
    {
        3,0,4,7,
        3,2,1,0,
        2,3,7,6,
        1,2,6,5,
        4,5,6,7,
        0, 1, 5, 4
        //face 0
        //face 1
        //face 2
        //face 3
        //face 4
        //face 5
    };
    static GLfloat colors[][3] =
    {
        {0.0f, 0.0f, 1.0f },
        {0.0f, 1.0f, 1.0f },
        {0.0f, 1.0f, 0.0f },
        {1.0f, 1.0f, 0.0f },
        {1.0f, 0.0f, 0.0f },
        {1.0f, 0.0f, 1.0f }
    };
    int numberOfFaces = 6;
    int verticesPerFace = 4;
    int n=0;
    for (int j=0; j<numberOfFaces; j++)
    {
        glColor3fv( colors[j] );
        glBegin(GL_POLYGON);
        for (int k=0; k<verticesPerFace; ++k)
        {
            glVertex3fv(vertices[ faces[n] ]);
            ++n;
        } glEnd();
    }
}
void MyDiamond::draw()
{
    static GLfloat vertices[][3] =
    {
        //top tip
        {  0.0f, 10.0f,  0.0f},
        //central upper
        { 10.0f,  2.0f,  0.0f},
        {  5.0f,  2.0f,  8.5f},
        { -5.0f,  2.0f,  8.5f},
        {-10.0f,  2.0f,  0.0f},
        { -5.0f,  2.0f, -8.5f},
        {  5.0f,  2.0f, -8.5f},
        //central lower
        { 10.0f, -2.0f,  0.0f},
        {  5.0f, -2.0f,  8.5f},
        { -5.0f, -2.0f,  8.5f},
        {-10.0f, -2.0f,  0.0f},
        { -5.0f, -2.0f, -8.5f},
        {  5.0f, -2.0f, -8.5f},
        //bottom tip
        {  0.0f,-10.0f,  0.0f}
    };
    //vertex indices of each polygon
    //-1 means end of polygon,
    //-999 means end of faces list
    static int faces[] =
    {
        0, 1, 6, -1,
        0, 6, 5, -1,
        0, 5, 4, -1,
        0, 4, 3, -1,
        0, 3, 2, -1,
        0, 2, 1, -1,
        1,  7, 12,  6, -1,
        6, 12, 11,  5, -1,
        5, 11, 10,  4, -1,
        4, 10,  9,  3, -1,
        3,  9,  8,  2, -1,
        2,  8,  7,  1, -1,
        7, 8, 9, 10, 11, 12, -1,
        -999 //end
    };
    static GLfloat colors[][3] =
    { {0.0f, 0.0f, 1.0f },
        {0.0f, 1.0f, 1.0f },
        {0.0f, 1.0f, 0.0f },
        {1.0f, 1.0f, 0.0f },
        {1.0f, 0.0f, 0.0f },
        {1.0f, 0.0f, 1.0f },
        {0.0f, 0.5f, 1.0f },
        {0.0f, 1.0f, 0.5f },
        {0.5f, 0.5f, 0.0f },
        {1.0f, 0.0f, 0.5f },
        {0.5f, 0.0f, 1.0f },
        {0.0f, 0.5f, 0.5f },
        {0.5f, 1.0f, 0.0f }
    };
    int n=0; //n iterate through each numbers in 'faces' array
    int facecount=0;
//    int verticesPerFace = 4;
    while (faces[n] != -999)
    {
        glColor3fv( colors[ facecount ] );
        glBegin(GL_POLYGON);
        while (faces[n] != -1) {
            glVertex3fv(vertices[ faces[n] ]);
            n++;
        }
        // fill this up
        glEnd();
        ++n;
        ++facecount;
    }
}
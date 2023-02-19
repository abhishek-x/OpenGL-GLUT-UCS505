#ifdef _WIN32
    #include<windows.h>
#endif

#define GL_SILENCE_DEPRECATION

#include<iostream>
#include <GLUT/GLUT.h>  // GLUT, includes glu.h and gl.h
 
using namespace std;

void Point(){
    glBegin(GL_POINTS);
        glColor3f(0.3,0.7,0.8);
        glVertex2i(100, 100);
    glEnd();
    glFlush();
}

void init(void)
{
    glClearColor(0,0,0,0);
    gluOrtho2D(0,500,0,400);
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10.0);
}

int main(int argc,char** argv ) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,400);
    glutCreateWindow("10 Pixel Point");
    init();
    glutDisplayFunc(Point);
    glutMainLoop();
    return 0;
}
#ifdef _WIN32
    #include<windows.h>
#endif

#define GL_SILENCE_DEPRECATION

#include<iostream>
#include <GLUT/GLUT.h>  // GLUT, includes glu.h and gl.h
 
using namespace std;

void Line(){
    glBegin(GL_LINES);
        glColor3f(0.0,1.0,0.0);
        glVertex2i(10, 10);
        glVertex2i(50, 50);
    glEnd();
    glFlush();
}

void init(void)
{
    glClearColor(0,0,0,0);
    gluOrtho2D(0,500,0,400);
    glClear(GL_COLOR_BUFFER_BIT);
}

int main(int argc,char** argv ) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,400);
    glutCreateWindow("Green Line");
    init();
    glutDisplayFunc(Line);
    glutMainLoop();
    return 0;
}
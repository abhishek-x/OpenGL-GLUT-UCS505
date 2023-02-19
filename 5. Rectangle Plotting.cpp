#ifdef _WIN32
    #include<windows.h>
#endif

#define GL_SILENCE_DEPRECATION

#include<iostream>
#include <GLUT/GLUT.h>  // GLUT, includes glu.h and gl.h
 
using namespace std;

void Rectangle(){
    glBegin(GL_QUADS);
        glColor3f(0.62,0.82,0.67);
        glVertex2i(100, 100);
        glVertex2i(300, 100);
        glVertex2i(300, 200);
        glVertex2i(100, 200);
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
    glutCreateWindow("Rectangle");
    init();
    glutDisplayFunc(Rectangle);
    glutMainLoop();
    return 0;
}
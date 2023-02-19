#ifdef _WIN32
    #include<windows.h>
#endif

#define GL_SILENCE_DEPRECATION

#include<iostream>
#include <GLUT/GLUT.h>  // GLUT, includes glu.h and gl.h
 
using namespace std;

void display() {
   glClearColor(0.7f, 0.3f, 0.4f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glFlush();
}
 
int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutCreateWindow("Blank Window");
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}
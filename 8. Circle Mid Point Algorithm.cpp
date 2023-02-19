#ifdef _WIN32
    #include<windows.h>
#endif

#define GL_SILENCE_DEPRECATION

#include<iostream>
#include <GLUT/GLUT.h>  // GLUT, includes glu.h and gl.h
 
using namespace std;

int X1, Y1, r;
void plot(int x, int y) {
    glBegin(GL_POINTS);
        glVertex2i(x+X1, y+Y1);
    glEnd();
}

void midPointCircleAlgo() {
    int x = 0;
    int y = r;
    float decision = 5/4 - r;
    plot(x, y);

    while (y > x) {
        if (decision < 0) {
            x++;
            decision += 2*x+1;
        } else {
            y--;
            x++;
            decision += 2*(x-y)+1;
        }
        plot(x, y);
        plot(x, -y);
        plot(-x, y);
        plot(-x, -y);
        plot(y, x);
        plot(-y, x);
        plot(y, -x);
        plot(-y, -x);
    }
}

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glPointSize(1.0);
    midPointCircleAlgo();
    glFlush ();
}

void myInit (void) {
    glClearColor(0,0,0,1);
    glColor3f(0.50,0.68,0.60);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
    cout << "X-coordinate : "; cin >> X1;
    cout << "Y-coordinate : "; cin >> Y1;
    cout << "Enter radius : "; cin >> r;

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("Circle Mid Point Alogrithm");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
#include <windows.h>
#include <GL/glut.h>

void Draw()
{

glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(1);
glBegin(GL_QUADS);
glColor3f(.7,0,.4);


glVertex2f(8.0,5.0);
glVertex2f( -8.0,5.0);
glVertex2f(-8.0,-5.0);
glVertex2f( 8.0,-5.0);

glEnd();
glFlush();

glLineWidth(1);
glBegin(GL_QUADS);
glColor3f(0,.5,0);


glVertex2f(8.0,5.0);
glVertex2f( -3.0,5.0);
glVertex2f(-3.0,3.0);
glVertex2f( 8.0,3.0);

glEnd();
glFlush();

glLineWidth(1);
glBegin(GL_QUADS);
glColor3f(1,1,0);


glVertex2f(8.0,3.0);
glVertex2f( -3.0,3.0);
glVertex2f(-3.0,1.0);
glVertex2f( 8.0,1.0);

glEnd();
glFlush();



glLineWidth(1);
glBegin(GL_QUADS);
glColor3f(0,.5,0);


glVertex2f(8.0,1.0);
glVertex2f( -3.0,1.0);
glVertex2f(-3.0,-1.0);
glVertex2f( 8.0,-1.0);

glEnd();
glFlush();

glLineWidth(1);
glBegin(GL_QUADS);
glColor3f(1,1,0);


glVertex2f(8.0,-1.0);
glVertex2f( -8.0,-1.0);
glVertex2f(-8.0,-3.0);
glVertex2f( 8.0,-3.0);

glEnd();
glFlush();

glLineWidth(1);
glBegin(GL_QUADS);
glColor3f(0,.5,0);


glVertex2f(8.0,-3.0);
glVertex2f( -8.0,-3.0);
glVertex2f(-8.0,-5.0);
glVertex2f( 8.0,-5.0);

glEnd();
glFlush();

glColor3f(1,1,1);
glLineWidth(2.5);
glBegin(GL_POLYGON);

glVertex2f(-6.0,2.5);
glVertex2f(-7.0,2.5);

glVertex2f(-6.1,1.5);
glVertex2f(-6.7,0.5);
glVertex2f(-5.5,1.3);

glVertex2f(-4.4,0.5);
glVertex2f(-4.7,1.8);
glVertex2f(-4.0,2.5);
glVertex2f(-5.0,2.5);

glVertex2f(-5.5,3.5);



glEnd();
glFlush();




}


void Initialize()
{
glClearColor( 1, 1, 1, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);glVertex2f(-4.0,-1.0);
}


int main(int Argc, char** Argv)
{

glutInit(&Argc, Argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(476, 477);
glutInitWindowPosition(200, 200);
glutCreateWindow("KhNishad");
Initialize();
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}

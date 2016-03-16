#include <stdio.h>
#include <GL/glut.h>
void myDisplay(void)
{
	glClear (GL_COLOR_BUFFER_BIT);
	glColor3f (0.0, 1.0, 0.0);
	glPointSize(10.0);
	glBegin(GL_LINE_LOOP);
	
	
	
	
	
	
	glVertex2i(100, 100);

	glVertex2i(300, 100);
	glVertex2i(300, 150);
	glVertex2i(250, 150);
	glVertex2i(250, 350);
	glVertex2i(300, 350);

	glVertex2i(300, 400);

	glVertex2i(100, 400);
	glVertex2i(100, 350);
	glVertex2i(150, 350);
	glVertex2i(150, 150);
	glVertex2i(100, 150);

	glEnd();
	glFlush ();
}
void myInit (void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (640, 480);
	glutInitWindowPosition (100, 150);
	glutCreateWindow ("my first attempt");
	glutDisplayFunc(myDisplay);
	myInit ();
	glutMainLoop();
}

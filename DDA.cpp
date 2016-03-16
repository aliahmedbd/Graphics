#include <iostream>
#include <glut.h>
#include<math.h>

using namespace std;

void plot(int x,int y){

	glBegin(GL_POINTS);
	glVertex2i(x, y);

	glEnd();
	glFlush();
	

}


void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	//glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1000, 0.0, 700);
}


void DDA(void){
	int x1=100,y1=200,x2=200,y2=300;

	cout << "Fisrt point:";
	cin >> x1 >> y1;

	cout <<"Second Point:";
	cin >> x2 >> y2;


	int length;
	float x=x1,y=y1;
	float xIncrement,yIncrement; 
	length=  abs(x2-x1);
	cout <<"Length" <<  length<< endl;

	if(abs(y2-y1) > length){
		length=abs(y2-y1);
	}
	xIncrement=(x2-x1)/float(length);
	yIncrement=(y2-y1)/float(length);
	x=x+0.5;
	y=y+0.5;
	glClear(GL_COLOR_BUFFER_BIT);
	for(int i=0;i<length;i++){
		cout << x << "  "<< y << endl;		
		x = x + xIncrement;
		y= y + yIncrement;	
		plot(floor(x),floor(y));
	}	
	
}

void main(int argc, char** argv)
{
	int x1,y1,x2,y2;
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 700);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("my first attempt");
	glutDisplayFunc(DDA);
	myInit();
	glutMainLoop();
}

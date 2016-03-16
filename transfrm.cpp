#include<iostream>
#include <GL/glut.h>
using namespace std;
float x=0,y=0;

void body(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(10.0);

	//Head
	glBegin(GL_POLYGON);
	glVertex2i(200, 400);
	glVertex2i(250, 400);
	glVertex2i(250, 450);
	glVertex2i(200, 450);
	glEnd();
	
   
	//body
	glBegin(GL_POLYGON);
	glVertex2i(150, 200);
	glVertex2i(300, 200);
	glVertex2i(300, 400);
	glVertex2i(150, 400);
	glEnd();

	//leg-1
	glBegin(GL_POLYGON);
	glVertex2i(170, 200);
	glVertex2i(170, 40);
	glVertex2i(200, 40);
	glVertex2i(200, 200);
	glEnd();

	//leg-2
	
	glBegin(GL_POLYGON);
	glVertex2i(250, 200);
	glVertex2i(250, 40);
	glVertex2i(280,40);
	glVertex2i(280, 200);
	glEnd();

	//eye-1
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(210, 430);
	glVertex2i(220, 430);
	glVertex2i(220,440);
	glVertex2i(210, 440);
	glEnd();

	//eye-2
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(230, 430);
	glVertex2i(240, 430);
	glVertex2i(240,440);
	glVertex2i(230, 440);
	glEnd();

	//mouth
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(210, 400);
	glVertex2i(240, 400);
	glVertex2i(240,420);
	glVertex2i(210, 420);
	glEnd();

	//leap
	
	glColor3f (0, 0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(215, 405);
	glVertex2i(235, 415);
	glVertex2i(235,415);
	glVertex2i(215, 405);
	glEnd();

	//hand-1
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(150, 270);
	glVertex2i(180, 270);
	glVertex2i(180,280);
	glVertex2i(150, 280);
	glEnd();

	//hand-2
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(270, 270);
	glVertex2i(300, 270);
	glVertex2i(300,280);
	glVertex2i(270, 280);
	glEnd();

	//kumor
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(180, 240);
	glVertex2i(270, 240);
	glVertex2i(270,250);
	glVertex2i(180, 250);
	glEnd();


	//chest
	glColor3f (1, 1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(200, 350);
	glVertex2i(250, 350);
	glVertex2i(250,290);
	glVertex2i(200, 290);
	glEnd();

	//flash
	glColor3f (1, 0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(200, 290);
	glVertex2i(250, 300);
	glVertex2i(225,320);
	glVertex2i(250, 330);
	glVertex2i(200, 320);
	glVertex2i(230, 310);
	glEnd();



	/*glColor3f (1, 1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(190, 360);
	glVertex2i(260, 360);
	glVertex2i(260,380);
	glVertex2i(190, 300);
	glEnd();*/


	//leg-1
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(170, 40);
	glVertex2i(200, 40);
	glVertex2i(200, 50);
	glVertex2i(170, 50);
	glEnd();

	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(170, 50);
	glVertex2i(180, 50);
	glVertex2i(180, 55);
	glVertex2i(170, 55);
	glEnd();

	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(190, 50);
	glVertex2i(200, 50);
	glVertex2i(200, 55);
	glVertex2i(190, 55);
	glEnd();



	//leg-2
	glBegin(GL_POLYGON);
	glVertex2i(250, 40);
	glVertex2i(280,40);	
	glVertex2i(280, 50);
	glVertex2i(250, 50);
	glEnd();

	
	


	glFlush ();
	
	
}
void legs(void){
	glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(10.0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(170,10);
	glVertex2i(200, 10);
	glVertex2i(200,200);
	glVertex2i(170, 200);
	
	
}

void translate(){

	 glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(10.0);

	/////////////////////////////

	glBegin(GL_POLYGON);
	glVertex2i(200, 400);
	glVertex2i(250, 400);
	glVertex2i(250, 450);
	glVertex2i(200, 450);
	glEnd();
	
   
	//body
	glBegin(GL_POLYGON);
	glVertex2i(150, 200);
	glVertex2i(300, 200);
	glVertex2i(300, 400);
	glVertex2i(150, 400);
	glEnd();

	//leg-1
	glBegin(GL_POLYGON);
	glVertex2i(170, 200);
	glVertex2i(170, 40);
	glVertex2i(200, 40);
	glVertex2i(200, 200);
	glEnd();

	//leg-2
	
	glBegin(GL_POLYGON);
	glVertex2i(250, 200);
	glVertex2i(250, 40);
	glVertex2i(280,40);
	glVertex2i(280, 200);
	glEnd();

	//eye-1
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(210, 430);
	glVertex2i(220, 430);
	glVertex2i(220,440);
	glVertex2i(210, 440);
	glEnd();

	//eye-2
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(230, 430);
	glVertex2i(240, 430);
	glVertex2i(240,440);
	glVertex2i(230, 440);
	glEnd();

	//mouth
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(210, 400);
	glVertex2i(240, 400);
	glVertex2i(240,420);
	glVertex2i(210, 420);
	glEnd();

	//leap
	
	glColor3f (0, 0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(215, 405);
	glVertex2i(235, 415);
	glVertex2i(235,415);
	glVertex2i(215, 405);
	glEnd();

	//hand-1
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(150, 270);
	glVertex2i(180, 270);
	glVertex2i(180,280);
	glVertex2i(150, 280);
	glEnd();

	//hand-2
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(270, 270);
	glVertex2i(300, 270);
	glVertex2i(300,280);
	glVertex2i(270, 280);
	glEnd();

	//kumor
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(180, 240);
	glVertex2i(270, 240);
	glVertex2i(270,250);
	glVertex2i(180, 250);
	glEnd();


	//chest
	glColor3f (1, 1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(200, 350);
	glVertex2i(250, 350);
	glVertex2i(250,290);
	glVertex2i(200, 290);
	glEnd();

	//flash
	glColor3f (1, 0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(200, 290);
	glVertex2i(250, 300);
	glVertex2i(225,320);
	glVertex2i(250, 330);
	glVertex2i(200, 320);
	glVertex2i(230, 310);
	glEnd();



	/*glColor3f (1, 1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(190, 360);
	glVertex2i(260, 360);
	glVertex2i(260,380);
	glVertex2i(190, 300);
	glEnd();*/


	//leg-1
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(170, 40);
	glVertex2i(200, 40);
	glVertex2i(200, 50);
	glVertex2i(170, 50);
	glEnd();

	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(170, 50);
	glVertex2i(180, 50);
	glVertex2i(180, 55);
	glVertex2i(170, 55);
	glEnd();

	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(190, 50);
	glVertex2i(200, 50);
	glVertex2i(200, 55);
	glVertex2i(190, 55);
	glEnd();



	//leg-2
	glBegin(GL_POLYGON);
	glVertex2i(250, 40);
	glVertex2i(280,40);	
	glVertex2i(280, 50);
	glVertex2i(250, 50);
	glEnd();


	///////////////////////////////

	// glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(10.0);

	//Head
	glBegin(GL_POLYGON);
	glVertex2i(200+x, 400+y);
	glVertex2i(250+x, 400+y);
	glVertex2i(250+x, 450+y);
	glVertex2i(200+x, 450+y);
	glEnd();
	
   
	//body
	glBegin(GL_POLYGON);
	glVertex2i(150+x, 200+y);
	glVertex2i(300+x, 200+y);
	glVertex2i(300+x, 400+y);
	glVertex2i(150+x, 400+y);
	glEnd();

	//leg-1
	glBegin(GL_POLYGON);
	glVertex2i(170+x, 200+y);
	glVertex2i(170+x, 40+y);
	glVertex2i(200+x, 40+y);
	glVertex2i(200+x, 200+y);
	glEnd();

	//leg-2
	
	glBegin(GL_POLYGON);
	glVertex2i(250+x, 200+y);
	glVertex2i(250+x, 40+y);
	glVertex2i(280+x,40+y);
	glVertex2i(280+x, 200+y);
	glEnd();

	//eye-1
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(210+x, 430+y);
	glVertex2i(220+x, 430+y);
	glVertex2i(220+x,440+y);
	glVertex2i(210+x, 440+y);
	glEnd();

	//eye-2
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(230+x, 430+y);
	glVertex2i(240+x, 430+y);
	glVertex2i(240+x,440+y);
	glVertex2i(230+x, 440+y);
	glEnd();

	//mouth
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(210+x, 400+y);
	glVertex2i(240+x, 400+y);
	glVertex2i(240+x,420+y);
	glVertex2i(210+x, 420+y);
	glEnd();

	//leap
	
	glColor3f (0, 0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(215+x, 405+y);
	glVertex2i(235+x, 415+y);
	glVertex2i(235+x,415+y);
	glVertex2i(215+x, 405+y);
	glEnd();

	//hand-1
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(150+x, 270+y);
	glVertex2i(180+x, 270+y);
	glVertex2i(180+x,280+y);
	glVertex2i(150+x, 280+y);
	glEnd();

	//hand-2
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(270+x, 270+y);
	glVertex2i(300+x, 270+y);
	glVertex2i(300+x,280+y);
	glVertex2i(270+x, 280+y);
	glEnd();

	//kumor
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(180+x, 240+y);
	glVertex2i(270+x, 240+y);
	glVertex2i(270+x,250+y);
	glVertex2i(180+x, 250+y);
	glEnd();


	//chest
	glColor3f (1, 1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(200+x, 350+y);
	glVertex2i(250+x, 350+y);
	glVertex2i(250+x,290+y);
	glVertex2i(200+x, 290+y);
	glEnd();

	//flash
	glColor3f (1, 0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(200+x, 290+y);
	glVertex2i(250+x, 300+y);
	glVertex2i(225+x,320+y);
	glVertex2i(250+x, 330+y);
	glVertex2i(200+x, 320+y);
	glVertex2i(230+x, 310+y);
	glEnd();



	/*glColor3f (1, 1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(190, 360);
	glVertex2i(260, 360);
	glVertex2i(260,380);
	glVertex2i(190, 300);
	glEnd();*/


	//leg-1
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(170+x, 40+y);
	glVertex2i(200+x, 40+y);
	glVertex2i(200+x, 50+y);
	glVertex2i(170+x, 50+y);
	glEnd();

	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(170+x, 50+y);
	glVertex2i(180+x, 50+y);
	glVertex2i(180+x, 55+y);
	glVertex2i(170+x, 55+y);
	glEnd();

	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(190+x, 50+y);
	glVertex2i(200+x, 50+y);
	glVertex2i(200+x, 55+y);
	glVertex2i(190+x, 55+y);
	glEnd();



	//leg-2
	glBegin(GL_POLYGON);
	glVertex2i(250+x, 40+y);
	glVertex2i(280+x,40+y);	
	glVertex2i(280+x, 50+y);
	glVertex2i(250+x, 50+y);
	glEnd();

	
	


	glFlush ();
	
	
}
void scale(){

    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(10.0);

	//Head
	glBegin(GL_POLYGON);
	glVertex2i(200*x, 400*y);
	glVertex2i(250*x, 400*y);
	glVertex2i(250*x, 450*y);
	glVertex2i(200*x, 450*y);
	glEnd();
	
   
	//body
	glBegin(GL_POLYGON);
	glVertex2i(150*x, 200*y);
	glVertex2i(300*x, 200*y);
	glVertex2i(300*x, 400*y);
	glVertex2i(150*x, 400*y);
	glEnd();

	//leg-1
	glBegin(GL_POLYGON);
	glVertex2i(170*x, 200*y);
	glVertex2i(170*x, 40*y);
	glVertex2i(200*x, 40*y);
	glVertex2i(200*x, 200*y);
	glEnd();

	//leg-2
	
	glBegin(GL_POLYGON);
	glVertex2i(250*x, 200*y);
	glVertex2i(250*x, 40*y);
	glVertex2i(280*x,40*y);
	glVertex2i(280*x, 200*y);
	glEnd();

	//eye-1
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(210*x, 430*y);
	glVertex2i(220*x, 430*y);
	glVertex2i(220*x,440*y);
	glVertex2i(210*x, 440*y);
	glEnd();

	//eye-2
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(230*x, 430*y);
	glVertex2i(240*x, 430*y);
	glVertex2i(240*x,440*y);
	glVertex2i(230*x, 440*y);
	glEnd();

	//mouth
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(210*x, 400*y);
	glVertex2i(240*x, 400*y);
	glVertex2i(240*x,420*y);
	glVertex2i(210*x, 420*y);
	glEnd();

	//leap
	
	glColor3f (0, 0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(215*x, 405*y);
	glVertex2i(235*x, 415*y);
	glVertex2i(235*x,415*y);
	glVertex2i(215*x, 405*y);
	glEnd();

	//hand-1
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(150*x, 270*y);
	glVertex2i(180*x, 270*y);
	glVertex2i(180*x,280*y);
	glVertex2i(150*x, 280*y);
	glEnd();

	//hand-2
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(270*x, 270*y);
	glVertex2i(300*x, 270*y);
	glVertex2i(300*x,280*y);
	glVertex2i(270*x, 280*y);
	glEnd();

	//kumor
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(180*x, 240*y);
	glVertex2i(270*x, 240*y);
	glVertex2i(270*x,250*y);
	glVertex2i(180*x, 250*y);
	glEnd();


	//chest
	glColor3f (1, 1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(200*x, 350*y);
	glVertex2i(250*x, 350*y);
	glVertex2i(250*x,290*y);
	glVertex2i(200*x, 290*y);
	glEnd();

	//flash
	glColor3f (1, 0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(200*x, 290*y);
	glVertex2i(250*x, 300*y);
	glVertex2i(225*x,320*y);
	glVertex2i(250*x, 330*y);
	glVertex2i(200*x, 320*y);
	glVertex2i(230*x, 310*y);
	glEnd();



	/*glColor3f (1, 1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(190, 360);
	glVertex2i(260, 360);
	glVertex2i(260,380);
	glVertex2i(190, 300);
	glEnd();*/


	//leg-1
	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(170*x, 40*y);
	glVertex2i(200*x, 40*y);
	glVertex2i(200*x, 50*y);
	glVertex2i(170*x, 50*y);
	glEnd();

	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(170*x, 50*y);
	glVertex2i(180*x, 50*y);
	glVertex2i(180*x, 55*y);
	glVertex2i(170*x, 55*y);
	glEnd();

	glColor3f (255.0, 255.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(190*x, 50*y);
	glVertex2i(200*x, 50*y);
	glVertex2i(200*x, 55*y);
	glVertex2i(190*x, 55*y);
	glEnd();



	//leg-2
	glBegin(GL_POLYGON);
	glVertex2i(250*x, 40*y);
	glVertex2i(280*x,40*y);	
	glVertex2i(280*x, 50*y);
	glVertex2i(250*x, 50*y);
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

	cout << "Enter your choice:\n1.Sample\n2.Translate\n3.Scale\n4.Rotate" << endl;
	int a;
	cin >> a;		
	if(a==1){
		glutCreateWindow ("my first attempt");
		glutDisplayFunc(body);
	}
	if(a==2){
		cout << "Please enter x and y value:" << endl;
		cin >> x;
		cin >> y;
		glutCreateWindow ("my first attempt");	
		glutDisplayFunc(translate);
	}
	if(a==3){
		cout << "Please enter x and y value:" << endl;
		cin >> x;
		cin >> y;
		glutCreateWindow ("my first attempt");	
		glutDisplayFunc(scale);
	}
	//glutDisplayFunc(legs);
	myInit ();
	glutMainLoop();
}
#include <stdio.h>
#include <GL/glut.h>
#include<math.h>


void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1000, 0.0, 700);
}

void circleDrawer(double h, double k, double r, double step, double start, double end)
{
	
	for (double theta = start; theta < end; theta = theta + step)
	{
		double x = h + r*cos(theta*0.0174532925);
		double y = k + r*sin(theta*0.0174532925);
		glVertex2d(x, y);
	}

}

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(4.0);

	glColor3f(0.47, 0.47, 0.47);
	glBegin(GL_POLYGON);
	glVertex2i(0, 0);
	glVertex2i(1000, 0);
	glVertex2i(1000, 700);
	glVertex2i(0, 700);
	glEnd();

	glLineWidth(3.0);
	glColor3f(1, 1, 1);

	glBegin(GL_LINE_LOOP); //5 4 3 2
	glVertex2i(200, 600);
	glVertex2i(151, 630);
	glVertex2i(125, 585);
	glVertex2i(170, 555);
	glEnd();

	glBegin(GL_LINE_LOOP); //5 2 13
	glVertex2i(200, 600);
	glVertex2i(170, 555);
	glVertex2i(225, 555);
	glEnd();

	glBegin(GL_LINE_LOOP); //13 2 1
	glVertex2i(225, 555);
	glVertex2i(170, 555);
	glVertex2i(200, 510);
	glEnd();

	glBegin(GL_LINE_LOOP); //13 1 8
	glVertex2i(225, 555);
	glVertex2i(200, 510);
	glVertex2i(250, 510);
	glEnd();

	glBegin(GL_LINE_LOOP); //13 8 7
	glVertex2i(225, 555);
	glVertex2i(250, 510);
	glVertex2i(275, 555);
	glEnd();

	glBegin(GL_LINE_LOOP); //13 7 6
	glVertex2i(225, 555);
	glVertex2i(275, 555);
	glVertex2i(250, 600);
	glEnd();

	glBegin(GL_LINE_LOOP); //13 6 5
	glVertex2i(225, 555);
	glVertex2i(250, 600);
	glVertex2i(200, 600);
	glEnd();

	glBegin(GL_LINE_LOOP); //1 14 8
	glVertex2i(200, 510);
	glVertex2i(225, 465);
	glVertex2i(250, 510);
	glEnd();

	glBegin(GL_LINE_LOOP); //6 7 15
	glVertex2i(250, 600);
	glVertex2i(275, 555);
	glVertex2i(300, 600);
	glEnd();

	glBegin(GL_LINE_LOOP); //15 14 9 12
	glVertex2i(300, 600);
	glVertex2i(225, 465);
	glVertex2i(270, 440);
	glVertex2i(345, 575);
	glEnd();

	glBegin(GL_LINE_LOOP); //7 8 10 11
	glVertex2i(275, 555);
	glVertex2i(250, 510);
	glVertex2i(295, 485);
	glVertex2i(320, 530);
	glEnd();

	glBegin(GL_LINE_LOOP); //12 9 19 16
	glVertex2i(345, 575);
	glVertex2i(270, 440);
	glVertex2i(315, 415);
	glVertex2i(390, 550);
	glEnd();

	glBegin(GL_LINE_LOOP); //11 10 18 17
	glVertex2i(320, 530);
	glVertex2i(295, 485);
	glVertex2i(340, 460);
	glVertex2i(365, 505);
	glEnd();

	glBegin(GL_LINE_LOOP); //16 19 20 23
	glVertex2i(390, 550);
	glVertex2i(315, 415);
	glVertex2i(360, 390);
	glVertex2i(435, 525);
	glEnd();

	glBegin(GL_LINE_LOOP); //17 18 21 22
	glVertex2i(365, 505);
	glVertex2i(340, 460);
	glVertex2i(385, 435);
	glVertex2i(410, 480);
	glEnd();


	glBegin(GL_LINE_LOOP); //28 26 27
	glVertex2i(225, 415);
	glVertex2i(225, 365);
	glVertex2i(270, 390);
	glEnd();

	glBegin(GL_LINE_LOOP); //28 27 9
	glVertex2i(225, 415);
	glVertex2i(270, 390);
	glVertex2i(270,440);
	glEnd();

	glBegin(GL_LINE_LOOP); //28 9 14
	glVertex2i(225, 415);
	glVertex2i(270, 440);
	glVertex2i(225, 465);
	glEnd();

	glBegin(GL_LINE_LOOP); //27 26 25
	glVertex2i(270,390);
	glVertex2i(225,365);
	glVertex2i(270, 340);
	glEnd();


	glBegin(GL_LINE_LOOP); //27 25 24
	glVertex2i(270,390);
	glVertex2i(270,340);
	glVertex2i(315,365);
	glEnd();

	glBegin(GL_LINE_LOOP); //27 24 19
	glVertex2i(270,390);
	glVertex2i(315,365);
	glVertex2i(315,415);
	glEnd();

	glBegin(GL_LINE_LOOP); //19 24 20
	glVertex2i(315, 415);
	glVertex2i(315, 365);
	glVertex2i(360, 390);
	glEnd();

	glBegin(GL_LINE_LOOP); //33 12 16
	glVertex2i(390, 600);
	glVertex2i(345,575);
	glVertex2i(390, 550);
	glEnd();

	glBegin(GL_LINE_LOOP); //33 16 29
	glVertex2i(390, 600);
	glVertex2i(390, 550);
	glVertex2i(435, 575);
	glEnd();

	glBegin(GL_LINE_LOOP); //33 29 30
	glVertex2i(390, 600);
	glVertex2i(435, 575);
	glVertex2i(435, 625);
	glEnd();

	glBegin(GL_LINE_LOOP); //33 30 31
	glVertex2i(390, 600);
	glVertex2i(435, 625);
	glVertex2i(390, 650);
	glEnd();

	glBegin(GL_LINE_LOOP); //33 31 32
	glVertex2i(390, 600);
	glVertex2i(390, 650);
	glVertex2i(345, 625);
	glEnd();

	glBegin(GL_LINE_LOOP); //33 32 12
	glVertex2i(390, 600);
	glVertex2i(345, 625);
	glVertex2i(345,575);
	glEnd();

	glBegin(GL_LINE_LOOP); //32 15 12
	glVertex2i(345, 625);
	glVertex2i(300,600);
	glVertex2i(345, 575);
	glEnd();

	glBegin(GL_LINE_LOOP); //29 16 23
	glVertex2i(435, 575);
	glVertex2i(390, 550);
	glVertex2i(435, 525);
	glEnd();

	glBegin(GL_LINE_LOOP); //25 26 36 37
	glVertex2i(270, 340);
	glVertex2i(225, 365);
	glVertex2i(200, 320);
	glVertex2i(245, 295);
	glEnd();

	glBegin(GL_LINE_LOOP); //31 30 35 34
	glVertex2i(390, 650);
	glVertex2i(435, 625);
	glVertex2i(460, 670);
	glVertex2i(415, 695);
	glEnd();


	//Circle for 9 19 13 10
	glBegin(GL_LINE_LOOP);
	circleDrawer(305, 450, 25.00, 1.00, 0 , 360);
	glEnd();

	//Circle for 10 13 17 11
	glBegin(GL_LINE_LOOP);
	circleDrawer(330, 495, 25.00, 1.00, 0, 360);
	glEnd();

	//Circle for 11 17 16 12
	glBegin(GL_LINE_LOOP);
	circleDrawer(355, 540, 25.00, 1.00, 0, 360);
	glEnd();

	//Circle for 17 13 21 22
	glBegin(GL_LINE_LOOP);
	circleDrawer(375, 470, 25.00, 1.00, 0, 360);
	glEnd();


	//Left Hand
	glColor3f(0.8, 0, 0);

	glBegin(GL_LINE_LOOP); //
	glVertex2i(265, 328);
	glVertex2i(250, 300);
	glVertex2i(260,290 );
	glVertex2i(265,270 );
	glVertex2i(270,270 );
	glVertex2i(270,290 );
	glVertex2i(275,292 );
	glVertex2i(290,280 );
	glVertex2i(298,288 );
	glVertex2i(280,300 );
	glVertex2i(280,310 );
	glVertex2i(300,310 );
	glVertex2i(300,320 );
	glVertex2i(280,320 );
	glEnd();


	//Right Hand
	glColor3f(1, 0.4, 0);
	glBegin(GL_LINE_LOOP); //
	glVertex2i(460, 670);
	glVertex2i(435, 625);
	glVertex2i(440, 625);
	glVertex2i(445,630);
	glVertex2i(455, 620);
	glVertex2i(465,605);
	glVertex2i(475,610);
	glVertex2i(468,620);
	glVertex2i(470,625);
	glVertex2i(485,620);
	glVertex2i(488,630);
	glVertex2i(475,633);
	glVertex2i(476,640);
	glVertex2i(490, 640);
	glVertex2i(490, 650);
	glVertex2i(475, 650);
	glVertex2i(465, 660);
	glVertex2i(468, 665);
	glEnd();

	
	glColor3f(0.8, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(550,500);
	glVertex2i(525,450 );
	glVertex2i(575,425 );
	glVertex2i(600,470 );
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2i(525, 450);
	glVertex2i(500, 400);
	glVertex2i(547,375 );  //(550,370 );
	glVertex2i(575, 425);
	glEnd();

	glColor3f(1, 0.4, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(547, 375);
	glVertex2i(520,320 );
	glVertex2i(570,300 );
	glVertex2i(600,350 );
	glEnd();

	glColor3f(0.8, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(600,470 );
	glVertex2i(645,445 );
	glVertex2i(675,495 );
	glVertex2i(625,520 );
	glEnd();


	//Hill
	glColor3f(0, 0, 0);

	glBegin(GL_POLYGON);
	glVertex2i(900, 100);
	glVertex2i(800, 0);
	glVertex2i(1000, 0);
	glVertex2i(1000, 30);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(800, 0);
	glVertex2i(750, 50);
	glVertex2i(700, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(600, 0);
	glVertex2i(525, 80);
	glVertex2i(450, 0);
	glEnd();


	//Fire
	glColor3f(0.96, 0.03, 0.38);
	glBegin(GL_LINES);
	glVertex2i(490, 625);
	glVertex2i(1000, 350);
	glEnd();


	//Half Circle
	glColor3f(0.8, 1, 0.2);
	glBegin(GL_LINE_STRIP);
	circleDrawer(422, 502, 25.00, 1.00, 242, 360);
	circleDrawer(422, 502, 25.00, 1.00, 0, 60);
	glEnd();

	glBegin(GL_LINE_STRIP);
	circleDrawer(405, 455, 25.00, 1.00, 228, 360);
	circleDrawer(405, 455, 25.00, 1.00, 0, 60);
	glEnd();

	glBegin(GL_LINE_STRIP);
	circleDrawer(375, 415, 25.00, 1.00, 242, 360);
	circleDrawer(375, 415, 25.00, 1.00, 0, 60);
	glEnd();


	glFlush();
}



void main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1000, 700);
glutInitWindowPosition(0, 0);
glutCreateWindow("my first attempt");
glutDisplayFunc(myDisplay);
myInit();
glutMainLoop();
}

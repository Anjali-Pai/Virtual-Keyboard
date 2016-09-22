#include <stdio.h>
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <stdlib.h>

char keyy,key1;
void display();

void keyup(int key,int x,int y)
{
	key1=0;
	switch(key)
	{
		case GLUT_KEY_LEFT: 	keyy=20;
					break;
		case GLUT_KEY_UP:	keyy=21;
					break;
		case GLUT_KEY_DOWN:	keyy=22;
					break;
		case GLUT_KEY_RIGHT:	keyy=19;
					break;
		default:		return;
	}

	display();
}

void keys(unsigned char key,int x,int y)
{
	int mod;

	glutSpecialFunc(keyup);

	
        mod = glutGetModifiers();

	if(mod==GLUT_ACTIVE_SHIFT)
	{
                keyy=16;
		key1=key;
	}
	else if(mod==GLUT_ACTIVE_CTRL)
	{
		keyy=17;
		key1=key;
	}
	else if(mod==GLUT_ACTIVE_ALT)
	{
		keyy=18;
		key1=key;
	}
	else
	{
		keyy=key;
		key1=0;
	}
	display();
}

void display(void)
{
	int i,j;
	char str1[10]="Backspace",str2[4]="Tab",str3[9]="Capslock",str4[6]="Enter",str5[6]="Shift",str6[5]="Ctrl",str7[4]="Alt",str8[5]="DELL",str9[3]="\\",str10[3]="<-",str11[3]="->",str[2]="\\", fstr1[56]="Project Title: Keyboard Layout with Key Press Detection", fstr2[90]="Submitted By: Ashish Naik, Yuvraj Patadia, Anjali Pai & Kunal Naickar", fstr3[34]="Guided By : Prof. Lissa Rodrigues";
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
        glBegin(GL_LINE_LOOP);			// White Border
                glVertex2f(-0.92,0.92);
                glVertex2f(0.98,0.92);
                glVertex2f(0.98,0.00);
                glVertex2f(-0.92,0.00);
        glEnd();
        glFlush();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);			//Red Line
		glVertex2f(-0.92,-0.01);
		glVertex2f(0.98,-0.01);
	glEnd();
	glFlush();

	glColor3f(0.0,1.0,0.0);
        glBegin(GL_LINES);			//Green Line
                glVertex2f(-0.92,-0.02);
                glVertex2f(0.98,-0.02);
        glEnd();
        glFlush();

	glColor3f(0.0,0.0,1.0);
        glBegin(GL_LINES);			//Blue Line
                glVertex2f(-0.92,-0.03);
                glVertex2f(0.98,-0.03);
        glEnd();
        glFlush();



//--------------------------------------ROW 1-------------------------------------------

	 if(key1=='~' || keyy=='`')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);	//key ~
	glVertex2f(-0.9,0.9);
	glVertex2f(-0.78,0.9);
	glVertex2f(-0.78,0.76);
	glVertex2f(-0.9,0.76);
	glEnd();
	glFlush();
	glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.84,0.85);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'~');
	glRasterPos2f(-0.84,0.78);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'`');


	if(keyy=='1' || key1=='!' ||key1=='1')
		glColor3f(1.0,0.0,0.0);	
	else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key 1
        glVertex2f(-0.77,0.9);
        glVertex2f(-0.65,0.9);
        glVertex2f(-0.65,0.76);
        glVertex2f(-0.77,0.76);
        glEnd();
        glFlush();
	glColor3f(0.0,0.0,0.0);
      	glRasterPos2f(-0.71,0.8);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'1');

	 if(keyy=='2' || key1=='@' || key1=='2')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);    //key 2
        glVertex2f(-0.64,0.9);
        glVertex2f(-0.52,0.9);
        glVertex2f(-0.52,0.76);
        glVertex2f(-0.64,0.76);
        glEnd();
        glFlush();
	glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.58,0.8);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'2');

         if(keyy=='3' || key1=='#' ||key1=='3')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);    //key 3
        glVertex2f(-0.51,0.9);
        glVertex2f(-0.39,0.9);
        glVertex2f(-0.39,0.76);
        glVertex2f(-0.51,0.76);
        glEnd();
        glFlush();
	glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.45,0.8);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'3');

	 if(keyy=='4' || key1=='$' || key1=='4')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);    //key 4
        glVertex2f(-0.38,0.9);
        glVertex2f(-0.26,0.9);
        glVertex2f(-0.26,0.76);
        glVertex2f(-0.38,0.76);
        glEnd();
        glFlush();
	glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.32,0.8);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'4');

	 if(keyy=='5' || key1=='%' || key1=='5')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);    //key 5
        glVertex2f(-0.25,0.9);
        glVertex2f(-0.13,0.9);
        glVertex2f(-0.13,0.76);
        glVertex2f(-0.25,0.76);
        glEnd();
        glFlush();
	glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.19,0.8);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'5');

	 if(keyy=='6' || key1=='^' || key1=='6')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);    //key 6
        glVertex2f(-0.12,0.9);
        glVertex2f(0.00,0.9);
        glVertex2f(0.00,0.76);
        glVertex2f(-0.12,0.76);
        glEnd();
        glFlush();
	glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.06,0.8);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'6');

         if(keyy=='7' || key1=='&' || key1=='7')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);    //key 7
        glVertex2f(0.01,0.9);
        glVertex2f(0.13,0.9);
        glVertex2f(0.13,0.76);
        glVertex2f(0.01,0.76);
        glEnd();
        glFlush();
	glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.07,0.8);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'7');

	 if(keyy=='8' || key1=='*' || key1=='8')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);    //key 8
        glVertex2f(0.14,0.9);
        glVertex2f(0.26,0.9);
        glVertex2f(0.26,0.76);
        glVertex2f(0.14,0.76);
        glEnd();
        glFlush();
	glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.20,0.8);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'8');

	 if(keyy=='9' || key1=='(' || key1=='9')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);    //key 9
        glVertex2f(0.27,0.9);
        glVertex2f(0.39,0.9);
        glVertex2f(0.39,0.76);
        glVertex2f(0.27,0.76);
        glEnd();
        glFlush();
	glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.33,0.8);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'9');

        if(keyy==48 || key1==')' || key1==48)
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);    //key 0
        glVertex2f(0.40,0.9);
        glVertex2f(0.52,0.9);
        glVertex2f(0.52,0.76);
        glVertex2f(0.40,0.76);
        glEnd();
        glFlush();
	glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.46,0.8);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'0');

	 if(keyy=='-' || key1=='_' || key1=='-')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);    //key -
        glVertex2f(0.53,0.9);
        glVertex2f(0.65,0.9);
        glVertex2f(0.65,0.76);
        glVertex2f(0.53,0.76);
        glEnd();
        glFlush();
	glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.59,0.85);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'_');
	glRasterPos2f(0.59,0.78);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'-');




	 if(keyy=='=' || key1=='+' || key1=='=')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);    //key =
        glVertex2f(0.66,0.9);
        glVertex2f(0.78,0.9);
        glVertex2f(0.78,0.76);
        glVertex2f(0.66,0.76);
        glEnd();
        glFlush();
	glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.72,0.85);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'+');
	glRasterPos2f(0.72,0.78);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'=');


	 if(keyy==8)
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);    //key Backspace
        glVertex2f(0.79,0.9);
        glVertex2f(0.96,0.9);
        glVertex2f(0.96,0.76);
        glVertex2f(0.79,0.76);
        glEnd();
        glFlush();
	 glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.80,0.8);
        for(i=0;i<9;i++)
                glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str1[i]);

//---------------------------------------ROW 2---------------------------------------------

	 if(keyy==9)
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key Tab
        glVertex2f(-0.9,0.75);
        glVertex2f(-0.74,0.75);
        glVertex2f(-0.74,0.61);
        glVertex2f(-0.9,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.88,0.65);
	for(i=0;i<3;i++)
	        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str2[i]);

	 if(keyy=='q' || key1=='Q' ||key1=='q')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key Q
        glVertex2f(-0.73,0.75);
        glVertex2f(-0.61,0.75);
        glVertex2f(-0.61,0.61);
        glVertex2f(-0.73,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.67,0.65);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'Q');

	if(key1=='W' || keyy=='w' || key1=='w')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key W
        glVertex2f(-0.60,0.75);
        glVertex2f(-0.48,0.75);
        glVertex2f(-0.48,0.61);
        glVertex2f(-0.60,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.54,0.65);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'W');

	if(key1=='E' || keyy=='e' || key1=='e')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key E
        glVertex2f(-0.47,0.75);
        glVertex2f(-0.35,0.75);
        glVertex2f(-0.35,0.61);
        glVertex2f(-0.47,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.41,0.65);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'E');

	if(key1=='R' || keyy=='r' || key1=='r') 
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key R
        glVertex2f(-0.34,0.75);
        glVertex2f(-0.22,0.75);
        glVertex2f(-0.22,0.61);
        glVertex2f(-0.34,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.28,0.65);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'R');

	if(key1=='T' || keyy=='t' || key1=='t')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key T
        glVertex2f(-0.21,0.75);
        glVertex2f(-0.09,0.75);
        glVertex2f(-0.09,0.61);
        glVertex2f(-0.21,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.15,0.65);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'T');

	if(key1=='Y' || keyy=='y' || key1=='y')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key Y
        glVertex2f(-0.08,0.75);
        glVertex2f(0.04,0.75);
        glVertex2f(0.04,0.61);
        glVertex2f(-0.08,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.02,0.65);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'Y');

	if(key1=='U' || keyy=='u' || key1=='u')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key U
        glVertex2f(0.05,0.75);
        glVertex2f(0.17,0.75);
        glVertex2f(0.17,0.61);
        glVertex2f(0.05,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.11,0.65);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'U');

	if(key1=='I' || keyy=='i' || key1=='i')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key I
        glVertex2f(0.18,0.75);
        glVertex2f(0.30,0.75);
        glVertex2f(0.30,0.61);
        glVertex2f(0.18,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.24,0.65);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'I');

	if(key1=='O' || keyy=='o' || key1=='o')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key O
        glVertex2f(0.31,0.75);
        glVertex2f(0.43,0.75);
        glVertex2f(0.43,0.61);
        glVertex2f(0.31,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.37,0.65);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'O');

	if(key1=='P' || keyy=='p' || key1=='p')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key P
        glVertex2f(0.44,0.75);
        glVertex2f(0.56,0.75);
        glVertex2f(0.56,0.61);
        glVertex2f(0.44,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.50,0.65);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'P');

	if(keyy=='[' || key1=='{')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key [
        glVertex2f(0.57,0.75);
        glVertex2f(0.69,0.75);
        glVertex2f(0.69,0.61);
        glVertex2f(0.57,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.63,0.65);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'[');

	if(keyy==']' || key1=='}')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key ]
        glVertex2f(0.70,0.75);
        glVertex2f(0.82,0.75);
        glVertex2f(0.82,0.61);
        glVertex2f(0.70,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.76,0.65);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,']');

	if(keyy==92 || key1=='|')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    /*key |*/
        glVertex2f(0.83,0.75);
        glVertex2f(0.96,0.75);
        glVertex2f(0.96,0.61);
        glVertex2f(0.83,0.61);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.89,0.65);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str[0]);

//--------------------------------------ROW 3------------------------------------------

	if(keyy==0)
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key Capslock
        glVertex2f(-0.9,0.60);
        glVertex2f(-0.72,0.60);
        glVertex2f(-0.72,0.46);
        glVertex2f(-0.9,0.46);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.89,0.50);
        for(i=0;i<8;i++)
                glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str3[i]);

	if(key1=='A' || keyy=='a' || key1=='a')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key A
        glVertex2f(-0.71,0.60);
        glVertex2f(-0.59,0.60);
        glVertex2f(-0.59,0.46);
        glVertex2f(-0.71,0.46);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.67,0.50);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'A');

	if(key1=='S' || keyy=='s' || key1=='s')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key S
        glVertex2f(-0.58,0.60);
        glVertex2f(-0.46,0.60);
        glVertex2f(-0.46,0.46);
        glVertex2f(-0.58,0.46);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.54,0.50);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'S');

	if(key1=='D' || keyy=='d' || key1=='d')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key D
        glVertex2f(-0.45,0.60);
        glVertex2f(-0.33,0.60);
        glVertex2f(-0.33,0.46);
        glVertex2f(-0.45,0.46);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.41,0.50);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'D');

	if(key1=='F' || keyy=='f' || key1=='f')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key F
        glVertex2f(-0.32,0.60);
        glVertex2f(-0.20,0.60);
        glVertex2f(-0.20,0.46);
        glVertex2f(-0.32,0.46);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.28,0.50);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'F');

	if(key1=='G' || keyy=='g' ||key1=='g')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key G
        glVertex2f(-0.19,0.60);
        glVertex2f(-0.07,0.60);
        glVertex2f(-0.07,0.46);
        glVertex2f(-0.19,0.46);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.15,0.50);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'G');

	if(key1=='H' || keyy=='h' ||key1=='h')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key H
        glVertex2f(-0.06,0.60);
        glVertex2f(0.06,0.60);
        glVertex2f(0.06,0.46);
        glVertex2f(-0.06,0.46);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.02,0.50);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'H');

	if(key1=='J' || keyy=='j' || key1=='j')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key J
        glVertex2f(0.07,0.60);
        glVertex2f(0.19,0.60);
        glVertex2f(0.19,0.46);
        glVertex2f(0.07,0.46);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.11,0.50);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'J');

	if(key1=='K' || keyy=='k' || key1=='k')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key K
        glVertex2f(0.20,0.60);
        glVertex2f(0.32,0.60);
        glVertex2f(0.32,0.46);
        glVertex2f(0.20,0.46);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.24,0.50);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'K');

	if(key1=='L' || keyy=='l' ||key1=='l')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key L
        glVertex2f(0.33,0.60);
        glVertex2f(0.45,0.60);
        glVertex2f(0.45,0.46);
        glVertex2f(0.33,0.46);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.37,0.50);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'L');

	if(keyy==';' ||key1==';' || key1==':')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key ;
        glVertex2f(0.46,0.60);
        glVertex2f(0.58,0.60);
        glVertex2f(0.58,0.46);
        glVertex2f(0.46,0.46);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.50,0.50);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,';');

	if(keyy==39 || key1=='"' || key1==39)
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key '
        glVertex2f(0.59,0.60);
        glVertex2f(0.71,0.60);
        glVertex2f(0.71,0.46);
        glVertex2f(0.59,0.46);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.63,0.50);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'"');

	if(keyy==13)
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key Enter
        glVertex2f(0.72,0.60);
        glVertex2f(0.96,0.60);
        glVertex2f(0.96,0.46);
        glVertex2f(0.72,0.46);
        glEnd();
        glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(0.84,0.46);
	glVertex2f(0.96,0.46);
	glVertex2f(0.96,0.31);
	glVertex2f(0.84,0.31);
	glEnd();
	glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.74,0.50);
	for(i=0;i<5;i++)
	        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str4[i]);

//------------------------------------ROW 4-------------------------------------------

	if(keyy==16)
                glColor3f(1.0,0.0,0.0);
        else	
	glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key Lshift
        glVertex2f(-0.9,0.45);
        glVertex2f(-0.68,0.45);
        glVertex2f(-0.68,0.31);
        glVertex2f(-0.9,0.31);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.89,0.35);
        for(i=0;i<5;i++)
                glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str5[i]);

	if(key1=='Z' || keyy=='z' || key1=='z')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key Z
        glVertex2f(-0.67,0.45);
        glVertex2f(-0.55,0.45);
        glVertex2f(-0.55,0.31);
        glVertex2f(-0.67,0.31);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.60,0.35);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'Z');

	if(key1=='X' || keyy=='x' || key1=='x')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key X
        glVertex2f(-0.54,0.45);
        glVertex2f(-0.42,0.45);
        glVertex2f(-0.42,0.31);
        glVertex2f(-0.54,0.31);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.47,0.35);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'X');

	if(key1=='C' || keyy=='c' || key1=='c')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key C
        glVertex2f(-0.41,0.45);
        glVertex2f(-0.29,0.45);
        glVertex2f(-0.29,0.31);
        glVertex2f(-0.41,0.31);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.34,0.35);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'C');

	if(key1=='V' || keyy=='v' || key1=='v')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key V
        glVertex2f(-0.28,0.45);
        glVertex2f(-0.16,0.45);
        glVertex2f(-0.16,0.31);
        glVertex2f(-0.28,0.31);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.21,0.35);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'V');

	if(key1=='B' || keyy=='b' || key1=='b')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key B
        glVertex2f(-0.15,0.45);
        glVertex2f(-0.03,0.45);
        glVertex2f(-0.03,0.31);
        glVertex2f(-0.15,0.31);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.08,0.35);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'B');

	if(key1=='N' || keyy=='n' || key1=='n')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key N
        glVertex2f(-0.02,0.45);
        glVertex2f(0.10,0.45);
        glVertex2f(0.10,0.31);
        glVertex2f(-0.02,0.31);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.03,0.35);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'N');

	if(key1=='M' || keyy=='m' || key1=='m')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key M
        glVertex2f(0.11,0.45);
        glVertex2f(0.23,0.45);
        glVertex2f(0.23,0.31);
        glVertex2f(0.11,0.31);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.16,0.35);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'M');

	if(keyy==',' || key1=='<' || key1==',')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key ,
        glVertex2f(0.24,0.45);
        glVertex2f(0.36,0.45);
        glVertex2f(0.36,0.31);
        glVertex2f(0.24,0.31);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.29,0.35);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,',');

	if(keyy=='.' || key1=='>' || key1=='.')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key .
        glVertex2f(0.37,0.45);
        glVertex2f(0.49,0.45);
        glVertex2f(0.49,0.31);
        glVertex2f(0.37,0.31);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.42,0.35);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'.');

	if(keyy=='/' || key1=='?' || key1=='/')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key /
        glVertex2f(0.50,0.45);
        glVertex2f(0.62,0.45);
        glVertex2f(0.62,0.31);
        glVertex2f(0.50,0.31);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.55,0.35);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'/');

/*	if(keyy==16)
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key RShift
        glVertex2f(0.63,0.45);
        glVertex2f(0.96,0.45);
        glVertex2f(0.96,0.31);
        glVertex2f(0.63,0.31);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.65,0.35);
	for(i=0;i<5;i++)
	        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str5[i]);
*/
//---------------------------------ROW 5----------------------------------

	if(keyy==17)
                glColor3f(1.0,0.0,0.0);
        else
                glColor3f(1.0,1.0,1.0);	
        glBegin(GL_POLYGON);    //key LCtrl
        glVertex2f(-0.9,0.30);
        glVertex2f(-0.72,0.30);
        glVertex2f(-0.72,0.15);
        glVertex2f(-0.9,0.15);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.89,0.20);
        for(i=0;i<4;i++)
                glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str6[i]);

	if(keyy==18)
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key LAlt
        glVertex2f(-0.65,0.30);
        glVertex2f(-0.52,0.30);
        glVertex2f(-0.52,0.15);
        glVertex2f(-0.65,0.15);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.63,0.20);
	for(i=0;i<3;i++)
	        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str7[i]);

	if(keyy==32)
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key SpaceBar
        glVertex2f(-0.48,0.30);
        glVertex2f(0.48,0.30);
        glVertex2f(0.48,0.15);
        glVertex2f(-0.48,0.15);
        glEnd();
        glFlush();

	if(keyy==20)
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key LArrow
        glVertex2f(0.55,0.30);
        glVertex2f(0.67,0.30);
        glVertex2f(0.67,0.15);
        glVertex2f(0.55,0.15);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.59,0.20);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'<');

	if(keyy==21)
                glColor3f(1.0,0.0,0.0);
        else
                glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key UpArrow
        glVertex2f(0.70,0.45);
        glVertex2f(0.82,0.45);
        glVertex2f(0.82,0.31);
        glVertex2f(0.70,0.31);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.75,0.38);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'/');
	glRasterPos2f(0.76,0.38);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str9[0]);

	if(keyy==22)
                glColor3f(1.0,0.0,0.0);
        else
                glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key DownArrow
        glVertex2f(0.70,0.30);
        glVertex2f(0.82,0.30);
        glVertex2f(0.82,0.15);
        glVertex2f(0.70,0.15);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
//        glRasterPos2f(0.77,0.24);
//        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'|');
        glRasterPos2f(0.75,0.20);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'V');

	if(keyy==19)
                glColor3f(1.0,0.0,0.0);
        else
                glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);    //key RArrow
        glVertex2f(0.84,0.30);
        glVertex2f(0.96,0.30);
        glVertex2f(0.96,0.15);
        glVertex2f(0.84,0.15);
        glEnd();
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(0.90,0.20);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'>');


	glColor3f(1.0,0.0,0.0);
	glRasterPos2f(-0.03,0.03);
	for(i=0;i<4;i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str8[i]);

	glColor3f(0.0,0.5,0.8);
	glRasterPos2f(-0.35,-0.30);
	for(i=0;fstr1[i]!='\0';i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,fstr1[i]);

	glColor3f(0.0,0.5,0.8);
        glRasterPos2f(-0.35,-0.50);
        for(i=0;fstr2[i]!='\0';i++)
                glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,fstr2[i]);

	glColor3f(0.0,0.5,0.8);
        glRasterPos2f(-0.35,-0.70);
        for(i=0;fstr3[i]!='\0';i++)
                glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,fstr3[i]);

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(-0.40,-0.20);
	glVertex2f(-0.05,-0.20);
	glVertex2f(-0.38,-0.18);
	glVertex2f(-0.38,-0.45);
	glVertex2f(0.63,-0.75);
	glVertex2f(0.3,-0.75);
	glVertex2f(0.6,-0.78);
	glVertex2f(0.6,-0.45);
	glEnd();
	glFlush();

//	glutKeyboardFunc(keys);

}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1250,600);
	glutInitWindowPosition(50,50);
	glutCreateWindow("Keyboard Layout");
	glutDisplayFunc(display);
	glutKeyboardFunc(keys);
	glutMainLoop();
}

#include<windows.h>
#include<iostream>
#include<math.h>
#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

using namespace std;

float pi=3.1416;

void CIRCLE(void){
    glColor3f(1.0f, 0.0f, 0.0f);
    glLineWidth(7.5);
    glBegin(GL_POLYGON);

    for(int i = 0 ; i < 200 ; i++){
        float A=2*pi*i/200;
        float r = 130;
        float x = r * cos(A)+135;
        float y = r * sin(A)-30;
        glVertex2f(x,y);
    }

    glEnd();
    glFlush();

}


void GREEN(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0f, 0.4f, 0.0f);
    glBegin(GL_LINES);
    for(int i = 30 ; i<75;i++){
        float A=2*pi*i/200;
        float r = 250;
        float x = r * cos(A);
        float y = r * sin(A);
        for(int j = 1 ; j<50 ;j++){
            x += (0.01*j);
            glVertex2f(x,y+100);
            glVertex2f(x,y-550);
        }
    }
    for(int i = 75 ; i<120;i++){
        float pi=3.1416;
        float A=2*pi*i/200;
        float r = 250;
        float y = r * cos(A)+413;
        float x = r * sin(A)+282;
        glVertex2f(x,y );
        for(int j = 1 ; j<50 ;j++){
            x += (0.01*j);
            glVertex2f(x,y+100);
            glVertex2f(x,y-550);

        }
    }
    glEnd();

    glFlush();
}

void PIPE(void){
    glColor3f(0.35f, 0.16f, 0.14f);
    glBegin(GL_POLYGON);
        glVertex2f(-150,300);
        glVertex2f(-200,300);
        glVertex2f(-200,-1300);
        glVertex2f(-150,-1300);
    glEnd();
    glFlush();
}

void GROUND(void){
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-300,-900);
        glVertex2f(900,-900);
        glVertex2f(700,-1600);
        glVertex2f(-500,-1600);
    glEnd();
    glFlush();

}

void MAN(void){
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    for(int i = 0 ; i < 200 ; i++){
        float A=2*pi*i/200;
        float r = 63;
        float x = r * cos(A)+336;
        float y = r * sin(A)-1038;
        glVertex2f(x,y);
    }
    glEnd();
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(330,-1100);
        glVertex2f(350,-1100);
        glVertex2f(350,-1250);
        glVertex2f(330,-1250);
    glEnd();
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(330,-1130);
        glVertex2f(275,-1180);
        glVertex2f(290,-1180);
        glVertex2f(330,-1150);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(330,-1130);
        glVertex2f(420,-1100);
        glVertex2f(435,-1100);
        glVertex2f(340,-1150);
    glEnd();
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);

        glVertex2f(420,-1100);
        glVertex2f(380,-1070);
        glVertex2f(400,-1070);
        glVertex2f(435,-1100);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(340,-1230);
        glVertex2f(320,-1310);
        glVertex2f(300,-1310);
        glVertex2f(350,-1250);
    glEnd();
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(330,-1240);
        glVertex2f(365,-1310);
        glVertex2f(380,-1310);
        glVertex2f(350,-1240);
    glEnd();
    glFlush();
}
void ORIGINAL_FLAG(void){
    glColor3f(0.0f, 0.4f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(1200,200);
        glVertex2f(2200,200);
        glVertex2f(2200,-400);
        glVertex2f(1200,-400);
    glEnd();
    glFlush();
    glColor3f(1.0f, 0.0f, 0.0f);
    glLineWidth(7.5);
    glBegin(GL_POLYGON);
    for(int i = 0 ; i < 200 ; i++){
        float A=2*pi*i/200;
        float r = 200;
        float x = r * cos(A)+1650;
        float y = r * sin(A)-100;
        glVertex2f(x,y);
    }
    glEnd();
    glFlush();
}

void Display(void)
{
    GREEN();
    CIRCLE();
    GROUND();
    PIPE();
    MAN();
    ORIGINAL_FLAG();
}
void myInit (void)
{
    glClearColor(0.196078 , 0.6, 0.8, 0.0);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-550.0, 2500.0,-1800.0, 500.0);
//    gluOrtho2D(0.0, 640.0,0.0, 480.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("Bangladesh Flag");
    cout<<"Bangladesh National Flag\nThe Right side flag : \n\tLength : 1000\n\tWidth : 600\n\tRadius : 200"<<endl;

    glutDisplayFunc(Display);
    myInit ();
    glutMainLoop();
}

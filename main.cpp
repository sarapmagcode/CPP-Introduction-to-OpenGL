#include<GL/glut.h>
#include<iostream>

using namespace std;

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_POLYGON);
	
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.5, -0.5);
	
	glEnd();
	
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1024, 768);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("simple");
	glutDisplayFunc(display);
	glutMainLoop();
}

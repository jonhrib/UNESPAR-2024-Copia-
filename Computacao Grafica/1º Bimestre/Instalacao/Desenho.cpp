/*
 * OpenGL.cpp
 *
 *  Created on: Abril 04, 2024
 *      Author: guiil_000
 */

#include <GL/glut.h>
#include <iostream>

void Desenha(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	gluOrtho2D(-5, 6, -4, 8);

	glBegin(GL_QUADS);
	for (int i = -2; i <= 3; i++) {
		glColor3f(1, i, 0);
		glVertex2f(i, 2);
		glVertex2f(i, 4);
	}
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.6, 0.2, 0.8);
	glVertex2f(-4, 4);
	glVertex2f(5, 4);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.59, 0.29, 0);
	glVertex2f(-4, 4.5);
	glVertex2f(-4, -4);
	glVertex2f(-3.5, -4);
	glVertex2f(-3.5, 4.5);

	glVertex2f(5, 4.5);
	glVertex2f(5, -4);
	glVertex2f(4.5, -4);
	glVertex2f(4.5, 4.5);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.72, 0.45, 0.2);
	glVertex2f(-1, -4);
	glVertex2f(0, -3);
	glVertex2f(1, -3);
	glVertex2f(2, -4);
	glEnd();

	glPointSize(7.0);
	glBegin(GL_POINTS);
	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(0, 0);
	glVertex2f(0.5, -1);
	glVertex2f(0, -1);
	glVertex2f(0, -2);
	glVertex2f(-0.5, -2);
	glVertex2f(-0.5, -3);
	glVertex2f(1.5, -3);
	glVertex2f(1.5, -2);
	glVertex2f(1.5, -1);
	glVertex2f(1, -2);
	glVertex2f(0.5, -2);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.53, 0.81, 0.98);
	glVertex2f(0, 5);
	glVertex2f(0.3, 6);

	glVertex2f(1, 2);
	glVertex2f(1.3, 3);

	glVertex2f(2, 1);
	glVertex2f(2.3, 2);

	glVertex2f(-1, -1);
	glVertex2f(-1.3, -2);

	glVertex2f(-2, -3);
	glVertex2f(-2.3, -4);

	glVertex2f(-4, 0);
	glVertex2f(-4.3, -1);

	glVertex2f(1, -1);
	glVertex2f(1.3, 0);

	glVertex2f(2, -3);
	glVertex2f(2.3, -2);

	glVertex2f(4, -4);
	glVertex2f(4.3, -3);

	glVertex2f(5, -2);
	glVertex2f(5.3, -1);

	glVertex2f(4, 3);
	glVertex2f(4.3, 4);

	glVertex2f(3, 2);
	glVertex2f(3.3, 3);

	glVertex2f(-3, 3);
	glVertex2f(-3.3, 2);

	glVertex2f(-4, 5);
	glVertex2f(-4.3, 4);

	glVertex2f(-2, 1);
	glVertex2f(-2.3, 0);

	glVertex2f(0, 1);
	glVertex2f(0.3, 2);

	glVertex2f(-0.3, 3);
	glVertex2f(-.6, 2);

	glVertex2f(-2, 5);
	glVertex2f(-2.3, 4);

	glVertex2f(-3, 6);
	glVertex2f(-3.3, 5);


	glVertex2f(3, 5);
	glVertex2f(3.3, 6);


	glVertex2f(2, 6);
	glVertex2f(2.3, 7);


	glVertex2f(-1, 7);
	glVertex2f(-1.3, 6);


	glVertex2f(4, 6);
	glVertex2f(4.3, 7);

	glVertex2f(3, -2);
	glVertex2f(3.3, -1);

	glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 500);
	glutInitWindowPosition(120, 150);
	glutCreateWindow("Sad Junina");
	glutDisplayFunc(Desenha);
	glutMainLoop();
}


#include <GL/glut.h>

void initialize() {
    glClearColor(0, 1, 1, 0);
}

void graphic() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.2, 0.7);
    glVertex2f(0.5, 0.1);
    glVertex2f(-0.2, -0.5);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 400);
    glutInitWindowPosition(100, 200);
    glutCreateWindow("Hello World!");

    initialize();

    glutDisplayFunc(graphic);

    glutMainLoop();

    return 0;
}

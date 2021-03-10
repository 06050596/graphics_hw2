
#include <GL/glut.h>
#include<math.h>

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_QUADS);
            glColor3f(1.0, 1.0, 1.0);

            glVertex2f(1,1);

    glEnd();
    glBegin(GL_LINE_STRIP);
            glColor3f(126/255.0, 126/255.0, 126/255.0);
        for(float angle=0;angle<3.14159265*2;angle+=0.01){
            glVertex2f(1*cos(angle),1*sin(angle));
        }
    glEnd();
    glBegin(GL_LINE_STRIP);
            glColor3f(126/255.0, 126/255.0, 126/255.0);
        for(float angle=0;angle<3.14159265*2;angle+=0.01){
            glVertex2f(0.83*cos(angle),0.83*sin(angle));
        }
    glEnd();
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");

    glutDisplayFunc(display);

    glutMainLoop();
}

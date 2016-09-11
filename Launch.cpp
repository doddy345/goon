#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include <GL/glut.h>

#include "Launch.h"
#include "World.h"
#include "Camera.h"

Camera* Launch::camera = NULL;
World* Launch::world = NULL;

void Launch:: init() {
  Launch::camera = new Camera();
  Launch::world = new World();
}

void Launch::display() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);  

  Launch::camera->updatePosition();
  Launch::world->draw();

  glFlush();
  glutSwapBuffers();
}

int main(int argc, char** argv) {
  std::cout << "Hello goons!" << std::endl;

  glutInit(&argc, argv);
  glutInitWindowSize(512, 512);
  glutInitWindowPosition(50, 50);

  glutCreateWindow("Goons");

  Launch::init();

  glutDisplayFunc(Launch::display);

  glutMainLoop();

  return 0;
}

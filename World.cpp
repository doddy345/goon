#include <stdlib.h>
#include <iostream>

#include <GL/glut.h>

#include "World.h"

void World::draw() {
  std::cout << "Drawing Scene" << std::endl;

  glMatrixMode(GL_MODELVIEW);

  this->drawGround();

  glColor3f(0.0f, 0.0f, 0.5f);

  glTranslatef(0.0f, 0.0f, 1.1f);
  glutSolidTeapot(0.8);
}

void World::drawGround() {
  std::cout << "Drawing Ground" << std::endl;
  
  glColor3f(0.2f, 0.7f, 0.0f);

  glBegin(GL_QUADS);
  glVertex3f(-5.0, 0.0f, -5.0);
  glVertex3f(-5.0, 0.0f, 5.0);
  glVertex3f(5.0, 0.0f, 5.0);
  glVertex3f(5.0, 0.0f, -5.0);
  glEnd();

}

void World::drawTree() {
  std::cout << "Drawing Tree" << std::endl;
}

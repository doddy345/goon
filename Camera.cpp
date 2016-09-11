#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include <GL/glew.h>
#include <GL/glut.h>

#include "Camera.h"

void Camera::updatePosition() {
  std::cout << "Updating Camera Position" << std::endl;

  glMatrixMode(GL_PROJECTION);
  
  glLoadIdentity();
  glFrustum(-1.0, 1.0, -1.0, 1.0, 0.1, 2.0);
  
  glMatrixMode(GL_MODELVIEW);
  
  glLoadIdentity();
  gluLookAt(0.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 0.0);
}

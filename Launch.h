#ifndef _LAUNCH_H
#define _LAUNCH_H

#include "Camera.h"
#include "World.h"

class Launch {
 public:
  static void display();
  static void init();

 private:
  static World* world;
  static Camera* camera;
};

#endif

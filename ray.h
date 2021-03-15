#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray {
private:
  point3 orig;
  vec3 dir;

public:
  ray() {}
  ray(const point3 &original, const vec3 &direction)
      : orig(original), dir(direction) {}
  point3 origin() const { return orig; }
  point3 direction() const { return dir; }
  point3 at(double t) const { return orig + t * dir; }
};

#endif

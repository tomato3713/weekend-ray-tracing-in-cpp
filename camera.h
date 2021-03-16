#ifndef CAMERA_H
#define CAMERA_H

#include "rtweekend.h"

class camera {
public:
  point3 orig;
  point3 lower_left_corner;
  vec3 horizontal;
  vec3 vertical;

public:
  // TODO: move camera
  camera() {
    auto aspect_ratio = 16.0 / 9.0;
    auto viewport_height = 2.0;
    auto viewport_width = aspect_ratio * viewport_height;
    auto focal_length = 1.0;

    orig = point3(0.0);
    horizontal = vec3(viewport_width, 0.0, 0.0);
    vertical = vec3(0.0, viewport_height, 0.0);

    lower_left_corner =
        orig - horizontal / 2 - vertical / 2 - vec3(0.0, 0.0, focal_length);
  }

  ray get_ray(double u, double v) const {
    return ray(orig, lower_left_corner + u * horizontal + v * vertical - orig);
  }
};

#endif

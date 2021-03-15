#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// utility functions
inline double degrees_to_raians(double degrees) {
    return degrees * pi / 180;
}

#include "vec3.h"
#include "ray.h"
#include "color.h"

#endif

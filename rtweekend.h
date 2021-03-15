#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>
#include <random>

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// TODO: Not sufficient randomness
inline double random_double() {
    return rand() / (RAND_MAX + 1.0);
}
inline double random_double(double min, double max) {
    return min + (max-min)*random_double();
}

// utility functions
inline double degrees_to_raians(double degrees) {
    return degrees * pi / 180;
}

#include "vec3.h"
#include "ray.h"
#include "color.h"

#endif

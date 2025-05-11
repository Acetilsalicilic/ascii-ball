#ifndef PHYSICS_HEADER
#define PHYSICS_HEADER 1

#include "ascii_ball.h"
#include "ball_printing.h"

#include <math.h>

struct Vector2
{
    int x;
    int y;
};

void calcMovement(struct Ball_t*, struct Screen_t);
void calcAcceleration(struct Ball_t* ball, int delta_time, const float accel_const);

#endif

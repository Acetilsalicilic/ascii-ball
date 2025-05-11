#include "physics.h"

void calcMovement(struct Ball_t* ball, struct Screen_t scr)
{
    // calculate supposed new position
    int new_x = ball->speed_x * scr.delta_time + ball->x;
    int new_y = ball->speed_y * scr.delta_time + ball->y;

    // calculate if out of bounds
    if (new_x > scr.size_x)
    {
        new_x = scr.size_x - ball->speed_x * scr.delta_time;
        ball->speed_x *= -1;
    }
    if (new_x < 0)
    {
        new_x -= ball->x;
        ball->speed_x *= -1;
    }

    if (new_y > scr.size_y)
    {
        new_y = scr.size_y - ball->speed_y * scr.delta_time;
        ball->speed_y *= -1;
    }
    if (new_y < 0)
    {
        new_y -= ball->y;
        ball->speed_y *= -1;
    }

    // return the new position
    ball->x = new_x;
    ball->y = new_y;
}

void calcAcceleration(struct Ball_t* ball, int delta_time, const float accel_const)
{
    // calculate the acceleration
    float accel = accel_const / delta_time;
    ball->speed_y += accel;
}

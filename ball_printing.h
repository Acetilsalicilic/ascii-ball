#ifndef SCREEN_HEADER
#define SCREEN_HEADER 1
#include "ascii_ball.h"
#include <stdio.h>

struct Screen_t
{
    int size_x;
    int size_y;
    char blank_char;
    char ball_char;
    int delta_time;
};

void printScreen(struct Screen_t scr, struct Ball_t ball);
#endif

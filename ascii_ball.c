#include "ascii_ball.h"
#include "ball_printing.h"
#include "physics.h"

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    // Ball initialization
    struct Ball_t ball;
    ball.x = 1;
    ball.y = 1;
    ball.speed_x = 2;
    ball.speed_y = 0;

    // Screen initialization
    struct Screen_t screen;
    screen.size_x = 20;
    screen.size_y = 20;
    screen.blank_char = ' ';
    screen.ball_char = 'O';
    int wait_time = 1;
    screen.delta_time = wait_time;

    // sym steps
    int sym_steps = 50;

    // Physic constants
    float accel_const = 9.8f;

    // get all the arguments
    for (int i=0; i<argc; i++)
    {
        if (strncmp(argv[i], "-x", 2) == 0)
        {
            ball.speed_x = strtof(argv[i+1], NULL);
        }
        if (strncmp(argv[i], "-y", 2) == 0)
        {
            ball.speed_y = strtof(argv[i+1], NULL);
        }
        if (strncmp(argv[i], "-w", 2) == 0)
        {
            screen.size_x = atoi(argv[i+1]);
        }
        if (strncmp(argv[i], "-h", 2) == 0)
        {
            screen.size_y = atoi(argv[i+1]);
        }
        if (strncmp(argv[i], "-a", 2) == 0)
        {
            accel_const = strtof(argv[i + 1], NULL);
        }
        if (strncmp(argv[i], "-s", 2) == 0)
        {
            sym_steps = atoi(argv[i + 1]);
        }
    }

    // sym loop
    for (int i=0; i<sym_steps; i++)
    {
        calcMovement(&ball, screen);
        calcAcceleration(&ball, screen.delta_time, accel_const);
        printf("+");

        printScreen(screen, ball);

        usleep(wait_time * 100000);
    }

    return 0;
}

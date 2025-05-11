#include "ball_printing.h"

void printScreen(struct Screen_t scr, struct Ball_t ball)
{
    // Print the screen
    for (int i=0; i<scr.size_x; i++)
    {
        for (int j=0; j<scr.size_y; j++)
            if (j == ball.x & i == ball.y)
                printf("%c", scr.ball_char);
            else
                printf("%c", scr.blank_char);
        printf("\n");
    }
}


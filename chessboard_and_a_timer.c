#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>


// a program that draws a chess board
void draw_chess_board(void)
{
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
                printf("[#]");
            else
                printf("[ ]");
        }
        printf("\n");
    }
}
void timer()
{
    // timer is a fuction that prints the time that start when the program is run
    int hour, minute, second;

    hour = minute = second = 0;

    while (hour < 24)
    {
        while (minute < 60)
        {
            while (second < 60)
            {
                printf("%d:%d:%d\n", hour, minute, second);
                // flush the buffer
                fflush(stdout);
                //sleep for 1 second
                sleep(1);
                second++;
            }
            minute++;
            second = 0;
        }
        hour++;
        minute = 0;
    }
}
int main(void)
{
    // variables
    int i;
    
    draw_chess_board();
    // new line
    printf("\n");
    // call the timer function
   timer();

    // return 0
    return 0;
}

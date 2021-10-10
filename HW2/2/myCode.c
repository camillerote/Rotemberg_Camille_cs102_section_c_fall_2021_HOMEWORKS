#include <stdio.h>
//This is an exercise in integer and remainder division :)

int main()
{
    int hours;
    int minutes;
    int time;
    printf("Enter number of minutes:\n" );
    scanf("%d", &time);
    hours = (time / 60);
    minutes = (time % 60);
    printf("Time: %d hours, %d minutes\n", hours, minutes);
    return 0;
}


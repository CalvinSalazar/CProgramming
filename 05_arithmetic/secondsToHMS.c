/*
Program converts the given number of seconds to HMS

65 seconds -> 0 hours, 1 minute, 5 seconds
3690 seconds -> 1 hour, 1 minute, 30 seconds

*/

#include <stdio.h>

int main (void){

    int seconds = 0;

    puts("Enter the number of seconds");
    scanf("%d", &seconds);

    if (seconds < 0) {
        puts("Seconds can not be negative.");
        return 0;
    }


    // Calculate the number of minutes

    int minutes = seconds / 60;
    int remaining_seconds = seconds % 60;

    // Calculate the number of hours and change the output
    int hours = minutes / 60;
    int remaining_minutes = minutes % 60;

    // Selection statement
    /*
    <
    >
    <=
    >=
    */

    if (seconds >= 0) {
        // Print the result
         printf("%d seconds is %d hours, %d minutes, and %d seconds\n", seconds, 
                                                                    hours, 
                                                                    remaining_minutes, 
                                                                    remaining_seconds);
    }
   

    return 0;
}
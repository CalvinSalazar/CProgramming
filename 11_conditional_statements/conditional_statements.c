/*
Condtional Statements

&& - logical AND
|| - logical OR
! - logical NOT
*/


#include <stdio.h>

int main (void) {
    int x = 0;
    scanf("%d", &x);

    if (x > 0 && x < 100 && x % 2 == 0) {
                printf("%d", x);
    }


    return 0;
}
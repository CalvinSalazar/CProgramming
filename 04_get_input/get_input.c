/*
    Getting an input from the keyboard
    Calculate the perimeter of a square
*/

#include <stdio.h>

int main(void) {
int square_side = 1;

// Print the prompt
puts("Enter the side of a square");

// Get the input
// & - address operator
scanf("%d", &square_side);

// Do the math
int square_perimeter = square_side * 4;

printf("The perimeter of a square of with a side of %d is %d\n", square_side, square_perimeter);

return 0;
}
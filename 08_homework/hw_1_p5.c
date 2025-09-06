#include <stdio.h>

int main(void) {
    int radius = 0;
    int width = 0;
    printf("Enter the radius of a circular playground: ");
    scanf("%d", &radius);
    printf("Enter the width of the walkway: ");
    scanf("%d", &width);
    int playground = 3 * radius * radius;
    int circle = 3 * (radius + width) * (radius + width);
    int walkway = circle - playground;
    printf("The area of the walkway is: %d", walkway);

    return 0;
}
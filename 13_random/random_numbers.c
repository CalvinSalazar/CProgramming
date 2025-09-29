#include <stdio.h> // print f
#include <stdlib.h> // srand, rand
#include <time.h> // time

// Function prototype
void printNRandom(int n);

int main(void){
    // Call srand function
    srand(time(0));

    //Function call
    printNRandom(10);
    return 0;
}

// Function definition (implementation)
void printNRandom(int n){
    int i = 0;
    while (i < n){
        //(max - min + 1) + min ; [min, max]
        printf("%d\n", rand() % (5 - -5 + 1) + -5);
        // i = i + 1;
        i += 1;
    }
}
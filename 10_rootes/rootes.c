/*
The program calculates the rootes of quadratic equations

Steps:
    1. Print the prompt
    2. Get coefficients
    3. Calculate the discriminant
    4. Print rootes

*/

#include <stdio.h>
#include <math.h> // For sqrt

// Function prototypes

void printPrompt(char coeff);
int getCoeff(void);
int calculateDiscriminant(int a, int b, int c);
void printRootes(int a, int b, int c);

int main(void) {
    printPrompt('a');
    int a = getCoeff();
    printPrompt('b');
    int b = getCoeff();
    printPrompt('c');
    int c = getCoeff();

    printf("%d %d %d\n", a, b, c);

    return 0;
}

void printPrompt(char coeff){
    printf("Enter the coefficient %c:", coeff);
}

int getCoeff(void){
    int coeff;
    scanf("%d", &coeff);

    return coeff;
}

int calculateDiscriminant(int a, int b, int c){
    return (b * b) - (4 * a * c);
}

void printRootes(int a, int b, int c){
    int discrim = calculateDiscriminant(a, b, c);
    if (discrim < 0){
        puts("No real rootes");
    }
    else if (discrim == 0){
        double x = -b / (2 * a);
        printf("x = %f\n", x);
    }
    else if (discrim > 0){
        double x1 = (-b + sqrt(discrim)) / (2 * a);
        double x2 = (-b - sqrt(discrim)) / (2 * a);
        printf("x1 = %lf; x2 =  %lf\n", x1, x2);
    }
    
}
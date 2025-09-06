/*
Practice with non-void function
*/

#include <stdio.h>

// Function prototypes
// Function takes nothing and returns an integer
int getFive(void);

// Function that converts the given number of kilometers into miles and 
// returns the result
double milesToKms(int miles);

// Function print weather condition based on the given temperature
void describeWeather(int temp) {
    if (temp >= 90) {
        puts ("HOT");
    }
    else if (temp >= 70) {
        puts ("MODERATE");
    }
    else if (temp >= 40) {
        puts("CHILLY");
    }
    else {
        puts("FREEZING COLD!!!");
    }
}

int getTemperature(void);

int main(void) {
    // Call getFive function
    int n = getFive();
    printf("%d\n", n);

    // Convert miles
    int miles = 100;
    printf("%d miles is %.2lf\n", miles, milesToKms(miles));


    int temp = getTemperature();
    describeWeather(temp);


    return 0;
}

int getFive(void) {
    return 5;
}

double milesToKms(int miles) {
    //return miles * 1.69;
    double kms = miles * 1.609;

    return kms;
}

int getTemperature(void) {
    puts("Enter the temperature");
    int temp;
    scanf("%d", &temp);

    return temp;
}
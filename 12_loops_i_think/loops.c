/* #include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void countDown (int n);
int n = 0;
int i = 0;

void printNRandom(int n);

int main (void){
    scanf("%d", &n);
    countDown (n);
   printNRandom (n);

   int counter = 1;
   while (counter <= 10){
   puts("I love coding!");
   counter = counter + 1;
   }
}

void countDown (int n){
while (n > 0){
    printf("%d\n", n);
    n = n - 1;
    usleep(40000);
}}

void printNRandom(int n){
while (i < n){
    printf("%d", rand());
    i = i + 1;
}
}
*/
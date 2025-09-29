#include <stdio.h>

// do...while, while, and for are interchangable

int main(){
    // Scan an uppdercase character
   /* char input;

    do{
        printf("Enter an uppercase character:");
        scanf(" %c", &input);
    } while (input < 'A' || input > 'Z');
    printf("%c\n", input);

    //Scan a positive interger
    int number;

    do{
        printf("Enter a positive interger:");
        scanf("%d", &number);
    } while (number <=0);
    printf("%d\n", number);

    /* for (initialization; condition; increment){
        statement 
    }
    
   for (int i = 15; i <=45; i = i+5){
    printf("%d\n", i);
   }

   for (int e = 100; e >= 2; e = e-2){
    printf("%d\n", e);
   }

   for (int h = 0; h < 100; h = h+1){
    puts("Hi!");
   }
*/
   // Scan an option (1 or 2)
   int option = 0;
   do {
    printf("Enter an option (1 or 2): ");
    scanf("%d", &option);
} while (option > 2 || option < 1);
    printf("%d\n", option);

    return 0;
} 
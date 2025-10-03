#include <stdio.h>
#include <unistd.h>

void printTriangleTopLeft(int n);
void printTriangleBottomLeft(int n);
void printTriangleTopRight(int n);
void printPyramidDigits(int n);

int main (void) {
    int n = 0;

    // Scan a positive interger

   do {
        printf("Scan a positive interger:");
        scanf("%d\n", &n);
    } while ( n <=0 ); 
    
    // Call a function
    int i = 1;
   //  while (i<100){
        printPyramidDigits(n);
      //  printTriangleTopRight(n);
   // printTriangleTopLeft(n);
    // printTriangleBottomLeft(n);  
   //}
    return 0;
}

/* void printTriangleTopLeft(int n){
    for (int i = 0; i < n; i++){
        for (int j = 1; j <=n-i; j--){
            printf("%d", j);
        }
        usleep(10000);
        puts(""); // prints new line
    }
}

 void printTriangleBottomLeft(int n){
    for (int i = 0; i < n; i++){
        for (int j = i+1; j <= n ; j++){
            printf("%d", j);
        }
        usleep(10000);
        puts("");
    }
} */

/* void printTriangleTopRight(int n){
    for (int i = 0; i < n; i++){
        // Print spaces
        for (int j = 0; j < i; j++){
            printf("%c", ' ');
        }

        // Print stars
        for (int j = 0; j < n - i; j++){
            printf("%c", '*');
        }

        puts("");
    }
} */


 void printPyramidDigits(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <=i; j++){
            printf("%c", '*');
        }

        for (int j = 1; j<=n-i; j++){
            printf("%c", '*');
        }
        puts(""); 
    }
}

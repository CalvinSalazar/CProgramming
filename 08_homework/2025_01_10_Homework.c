#include <stdio.h>


int score = 0;
double pay = 100;

int main (){
    scanf("%d", &score);
        if (score > 90) { 
                    pay+=(0.03*pay);
            printf("%0.2lf", pay); 

}  
    else {  
        pay+=(0.01*pay);
        printf("%0.2lf", pay); 
} 
}

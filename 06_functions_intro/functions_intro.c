/* Introduction to functions
Function format
<return_type> <name> (<input parameter>)
    // Function body
}

You cannot create a function inside a function!

*/

#include <stdio.h>

// Create a function that doesn't return any value and
// doesn't take any values
void print_course(void) { //function header
    printf("You are in COP 2271!\n");

}

// Create a function that doesn't return any value and
// takes an interger
void print_course_w_number(int course_number){
    if (course_number == 2271){
        printf("You are in the best %d course\n", course_number);
    }
    else {
        printf("You are in %d course\n", course_number);
    }
}

int main(void){
// to use a function I need to call it
    print_course();

    print_course_w_number(1234);
        int number = 2271;
    print_course_w_number(number);


return 0;
}

#include <stdio.h>

/* Regular function declaration */
int foo(int bar){
    return bar * 2;
}

/* Example function that doesn't return a value */
void moo(){
    printf("Has no return value\n");
}

/* Forward Declaration of function, created later */
int func(int value);

int main(){
    int should_be_four = foo(2);
    printf("%d\n", should_be_four);

    int should_be_three = func(2);
    printf("%d\n", should_be_three);

    moo();

    return 0;
}

/* Defining the function declared earlier */
int func(int value){
    return value + 1;
}

/* In C, the function must be declared before it is called */

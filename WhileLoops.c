#include <stdio.h>

int main(){
    int n = 0;
    while (n < 10){
        printf("%d\n", n);
        n++;
    }

    /* Loop directives:
    There are 2 of them - break and continue
    They work the same as they do in other languages */

    int i = 0;
    while (1){
        printf("%d\n", i);
        if (i == 10){
            break; // will stop after 10 iterations, even though while loop condition is true
        }
    }

    i = 0;
    while (i < 10){
        i++;
        if (i % 2 == 1){
            continue; // Will skip all odd numbers
        }
        printf("%d is even", i);
    }

    /* C doesn't have true or false, instead, anything that is non-zero will evaluate
    to true */
    i = 0;
    while (1){ // This is the same as a "while true" loop
        printf("Infinite Loop number %d\n", i);
        i++;
    }
}
#include <stdio.h>

int main(){
    int n = 0;
    while (n < 10){
        printf("%d\n", n);
        n++;
    }

    /* C doesn't have true or false, instead, anything that is non-zero will evaluate
    to true */
    int i = 0;
    while (1){ // This is the same as a "while true" loop
        printf("Infinite Loop number %d\n", i);
        i++;
    }
}
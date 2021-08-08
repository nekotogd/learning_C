#include <stdio.h>

int main(){
    int target = 10;
    if (target == 10){
        printf("Target is equal to 10");
    } else if (1 != 1){
        printf("This part of the code should never appear");
    }else{
        printf("Should run if target is set to a different value");
    }
    /* Boolean operators in C are:
    && for "and"
    || for "or"
    != for "not equals"
    == for "is equal to"
    */
}
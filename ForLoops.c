#include <stdio.h>

int main(){
    /* Iterating a fixed number of times (10 in the example below) */
    int i;
    for (i = 0; i < 10; i++){
        printf("%d\n", i);
    }

    /* Iterating over items in an array */
    int array[10] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    int sum = 0;
    i = 0;
    for (i = 0; i < 10; i++){
        sum += array[i];
    }
    printf("Sum of the array is %d\n", sum);
}
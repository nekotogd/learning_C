#include <stdio.h>

int main(){
    int numbers[10]; // defines an array of 10 integers

    /* populating the array */
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    /* prints the 7th number in the array */
    printf("The 7th number of the array is %d\n\n", numbers[6]);

    // Creating 2D arrays
    int a[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    int val = a[2][3];
    printf("Value of the array is %d", val);
    return 0;
}
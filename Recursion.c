#include <stdio.h>

unsigned int multiply(unsigned int x, unsigned int y)
{
    if (x == 1) // Terminating case
    {
        // Termination
        return y;
    } else if (x > 1){
        // Recursive step
        return y + multiply(x - 1, y);
    }
    // In the case that x is zero:
    return 0;
}

int factorial(int starting_number){
    if ((starting_number - 1) != 1){
        return starting_number * factorial(starting_number - 1);
    }else{
        return 1 * starting_number;
    }
}

int main(){
    printf("%d", factorial(8));
    return 0;
}
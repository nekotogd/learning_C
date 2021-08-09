#include <stdio.h>

/* Static variables:
By default, variables are local to the scope they are defined in.
Variables can be declared as static to increase their scope up to the file containing them.
Therefore, static variables can be accessed anywhere in the file */

int runner(){
    static int count = 0;
    /* If we use int count = 0;
    count will be freed from memory as soon as the function completes.
    By using static int, it is not freed from memory and can be changed when the function
    is called again */
    count++;
    return count;
}

/* Static functions:
By default, functions are global in C, meaning that all files have access to them.
When we use static, the scope of the function is reduced to the file containing it */
static void fun(void){
    printf("I am a static function\n");
}

int main(){
    printf("%d ", runner());
    printf("%d ", runner());
    fun();
    return 0;
}
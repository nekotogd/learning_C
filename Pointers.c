#include <stdio.h>

/* Pointers are simple integer variables that hold a memory address, instead of the actual value
of the variable itself.
Computer memory is a sequential store of data, and pointers point to a specific part of the memory.
Our program can use pointers in such a way that the pointers point to a large
amount of memory - depending on how much we decide to read from that point on. */

int main(){
    char * name = "John";
    /* The line above does 3 things:
        It allocates a local (stack) variable called name, which is a pointer to a single character
        It causes the string "John" to appear somewhere in the program memory (during runtime)
        It initializes the "name" argument to point to where the "J" character is in memory
    
    Now, if we try to access the name variable as an array, it will work and will return the ordinal
    value of the character "J", since the name variable actually points exactly to the beginning of
    the string.
    */

    /* Dereferencing:
    Its the act of referring to where the pointer actually points, and not the memory address.
    In array, we are actually already using dereferencing. The brackets operator [] accesses the
    first item of the array, and since arrays are actually pointers, accessing the first item is
    actually just dereferencing a pointer.
    Dereferencing a pointer is done using the * operator.
    */

    // Lets define a variable called a
    int a = 1;

    // Now lets make a pointer to a, and point it using the & operator
    int * pointer_to_a = &a;
    /* Here, the & operator tells the program to create a pointer to "a"
    but we use the * operator to deference it, grab the value of the a using the pointer we made
    and then set it to "pointer_to_a" */
    printf("The value of a is %d\n", a);
    printf("The value of pointer_to_a is also %d\n", *pointer_to_a);

    *pointer_to_a += 1;
    printf("The value of a is now %d", a);

    return 0;
}
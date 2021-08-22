#include <stdio.h>

/* C structures (struct) are special, large variables that contain several named variables inside
them
They are the foundation for Objects and Classes in C.
Structures are used for:
    Serialization of data
    Passing multiple arguments in and out of functions through a single argument
    Data structures such as linked lists, binary trees, and more

The most basic example are "points," which are a single entity that contains 2 variables
Lets define one
*/

struct point
{
    int x;
    int y;
};

/* Typedefs:
They allow us to define types with a different name.
This way we can create structs just like how we make integers, characters etc.
Here's the usage:
*/
typedef struct{
    int x;
    int y;
} coords;

/* Structures can also hold pointers
Which also means that they can hold strings or pointers to other structures as well,
and this is their real power!
*/
typedef struct
{
    char * brand;
    int model;
} vehicle;



/* Accessing the content of the struct is done using dot notation (struct.value) */
int main(){    
    struct point p;
    p.x = 10;
    p.y = 5;

    printf("The coords are (%d, %d)\n", p.x, p.y);

    /* Now we can define coords just like "int something" */
    coords other_p;
    other_p.x = 3;
    other_p.y = 7;
    printf("The other coords are (%d, %d)\n", other_p.x, other_p.y);

    vehicle mycar;
    mycar.brand = "Ford";
    mycar.model = 2007;
    printf("Here\'s my %s from %d\n", mycar.brand, mycar.model);
    return 0;
}


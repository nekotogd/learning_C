#include <stdio.h>

/* Pass the pointer to the variable instead of a copy of the variable ot function
this way, the function can manipulate the value of the variable instead of a local copy */

void addone(int *n){ // recieve a POINTER NOT A VARIABLE
    (*n)++; // Dereference and increment it
}

typedef struct
{
    int x;
    int y;
} point;


/* We can also pass pointers to structs */
void move(point * p){
    /* We could write:

    (*p).x++;
    (*p).y++;

    But there is actually a shorthand for dereferencing structures and accessing its members
    as it is widely used in data structures
    Here it is:
    */
   p->x++;
   p->y++;
}

int main(){
    int n = 99;
    printf("Before: %d\n", n);
    addone(&n); // Pass the POINTER NOT THE VARIABLE
    printf("After: %d\n", n);
}
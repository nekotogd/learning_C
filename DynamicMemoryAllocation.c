#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char * name;
    int age;
} person;

int main(){
    /* We're creating a new person struct called myperson
    assigning it to the return value of malloc(sizeof(person))
    This dynamically allocates memory according to the size */
    person * myperson = (person *) malloc(sizeof(person));
    myperson->name = "John";
    myperson->age = 27;
    printf("%s is %d years old\n", myperson->name, myperson->age);

    /* Using the free() method will get rid of the variable that the pointer points to
    However, the pointer will still exist. However, we cannot use the pointer since we will be
    denied access to that part of memory as we gave it up by using the free() method.
    Therefore, the pointer must not be used until we allocate new data to it. */
    free(myperson);
    return 0;
}


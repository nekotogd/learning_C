#include <stdio.h>

#define BOOL char
#define TRUE 1
#define FALSE 0

int foo;
int bar = 1;

int main(){
    printf("%d\n", foo);
    printf("%d\n\n", bar);

    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("%d", a);
}
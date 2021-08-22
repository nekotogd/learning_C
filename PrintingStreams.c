#include <stdio.h>

int main(){
    printf("This message goes through STDOUT using printf\n");
    fprintf(stdout, "This message also goes through STDOUT using fprintf\n");
    fprintf(stderr, "This message goes through STDERR using fprintf\n");
}
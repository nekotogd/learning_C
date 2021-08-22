#include <stdio.h>
#include <stdlib.h>

void read_from_file(char * filename){
    FILE *fptr;
    fptr = fopen(filename, "r");
    char * line = (char *) malloc(sizeof(char));

    int c_index;
    char c;
    while ((c = getc(fptr)) != EOF){
        line[c_index] = c;
        c_index++;
    }
    printf("%s\n", line);
    fclose(fptr);
    free(fptr);
}

int main(){
    FILE *fptr;
    fptr = fopen("file.txt", "w"); // "w" defines "writing mode"
    /* write to file */
    fprintf(fptr, "Text to be written to the file\n");
    fclose(fptr);

    read_from_file("file.txt");
}
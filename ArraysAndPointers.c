#include <stdio.h>
#include <stdlib.h>

void dma_one_d(){
    // Allocate memory to store five characters
    int n = 5;
    char *pvowels = (char *) malloc(n * sizeof(char));
    int i;

    pvowels[0] = 'A';
    pvowels[1] = 'E';
    *(pvowels + 2) = 'I';
    pvowels[3] = 'O';
    *(pvowels + 4) = 'U';
    /*
    As you can see, when using pvowels[2] and *(pvowels + 2) we are accessing the same thing
    */

    for (i = 0; i < n; i++) {
        printf("%c ", pvowels[i]);
    }

    printf("\n");

    free(pvowels);

    /*
    When using Dynamic Memory Allocation, remember that we are responsible for freeing
    the data at the pointer otherwise there are going to be memory leaks.
    */
}

void dma_two_d(){
    int nrows = 2;
    int ncols = 5;
    int i, j;

    // Allocate memory for nrows pointers
    char **pvowels = (char **) malloc(nrows * sizeof(char *));

    // For each row, allocate memory for ncols elements
    pvowels[0] = (char *) malloc(ncols * sizeof(char));
    pvowels[1] = (char *) malloc(ncols * sizeof(char));

    pvowels[0][0] = 'A';
    pvowels[0][1] = 'E';
    pvowels[0][2] = 'I';
    pvowels[0][3] = 'O';
    pvowels[0][4] = 'U';

    pvowels[1][0] = 'a';
    pvowels[1][1] = 'e';
    pvowels[1][2] = 'i';
    pvowels[1][3] = 'o';
    pvowels[1][4] = 'u';

    for (i = 0; i < nrows; i++)
    {
        for (j = 0; j < ncols; j++)
        {
            printf("%c | ", pvowels[i][j]);
        }
        printf("\n");
    }

    // Free individual rows
    free(pvowels[0]);
    free(pvowels[1]);

    // Free the top-level pointer
    free(pvowels);
}

int main(){
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    char *pvowels = vowels;
    int i;

    // Print the addresses
    for (i = 0; i < 5; i++){
        printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
    }

    // Print the values
    for (i = 0; i < 5; i++){
        printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    }

    /* This shows 2 things:
    1) &vowels[i] gives the memory address of the i'th element of the array
    2) vowels, &vowels[0], and vowels + 0 all point to the same location, the first index of the array
    
    (2) is because the name of the array itself is a constant pointer to the first element
    of the array
    */
    dma_one_d();
    dma_two_d();
    return 0;
}
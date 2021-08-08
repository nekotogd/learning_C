#include <stdio.h>
#include <string.h>

int main(){
    // Strings are actually an Array of characters
    char * name = "John Smith"; // Makes a string using pointers (covered later on) of characters
    printf(name);
    char other_name[] = "Penny Smith";
    /* we use [] to tell the compiler to automatically set the length of the string to the same size
    as the array */
    printf("\n\n");
    printf(other_name);
    printf("\n\n");
    printf("%d\n", strlen(name));
    

    /* String formatting with printf:
    printf("%s is %d years old.\n", name, age)
    This will replace "%s" with the string name and "%d" with the number age */

    /* String comparison with strncmp(name, "John", 4)
    where 4 is the maximum comparison length
    There is also an unsafe version of this function : strcmp, but its not recommended to use */

    /* String Concatenation : strncat(dest, src, n)
    where n is the maximum characters to be appended */

    char dest[20] = "Hello";
    char src[20] = "World";
    strncat(dest,src,3);
    printf("%s\n",dest);
    strncat(dest,src,20);
    printf("%s\n",dest);
    
    return 0;
}
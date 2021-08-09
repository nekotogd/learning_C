# What is this?
My Repo of C scripts as I'm learning how to write C. Decided to make public so others might benefit from it.

# Plans

Want to mainly focus on learning C, but I plan on making a bit of documentation for this so that others can learn C or just grab some example code to use for themselves.

I've been fiddling with Jupyter Notebooks lately, I think that might be a good way to create the docs for this.

However I'll only focus on it after I'm done with learning a good chunk on C.

For now this will mostly consist of example code you can look through or use.

```c
#include <stdio.h>
#include <string.h>
#define BOOL char
#define TRUE 1
#define FALSE 0

typedef struct
{
  int learning;
  char * hopes;
} student;

int main()
{
  student nekoto;
  nekoto.learning = TRUE;
  nekoto.hopes = "Wants to learn the basics of C!";
  
  printf("Hi this is Nekoto!\n");
  if (nekoto.learning)
  {
    printf("I\'m currently learning the language of C!\n");
  }
  printf(strncat(nekoto.hopes, " are my hopes!", strlen(nekoto.hopes)));
  return 0;
}
```

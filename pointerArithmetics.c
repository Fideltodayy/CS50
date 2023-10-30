#include <stdio.h>
// #include "cs50.h"

int main(void)
{
    char* s = "Hi!";

    // prints: Hi!
    printf("%c", *s); 
    printf("%c", *(s + 1)); 
    printf("%c\n", *(s + 2)); 
}
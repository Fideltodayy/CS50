#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main(void)
{
    string s = get_string("S: ");
    string t = get_string("T: ");

    if (strcmp(s,t) == 0)     
    {
        printf("Same\n");
    }
    else
    {
        printf("Not same\n");
    }
    
    
}
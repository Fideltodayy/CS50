#include <stdio.h>
#include "cs50.h"
int get_length(string str);
int main (void)
{
    string strin = get_string("Name: ");
    printf("%i characters\n",get_length(strin));

    
}

int get_length(string str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
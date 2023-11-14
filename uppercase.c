#include <stdio.h>
#include "cs50.h"
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before ");
    printf("Uppercase: ");
    for(int i = 0,len = strlen(s) ; i < len; i++)
    {
        if (s[i] >= 'a' && s[i]<= 'z')
        {
            // toupper method from ctype
            printf("%c", s[i] - 32);

        }else
        {
            printf("%c", s[i]);
        }
        
    }
    printf("\n");

}
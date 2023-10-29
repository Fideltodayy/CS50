#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string names[] = {"Fidel", "Ryan", "Leon"};
    // array of phone numbers in string format and country code
    string number[] = {"+461-264-462", "+254-112-741449", "+294-3453-3477"};
    string name = get_string"Name: ";
    for(int i=0; i<3; i++)
    {
        if (strcmp(names[i],name))
        {
            printf("Name: %s\nNumber: %s\n\n", names[i], number[i]);
            return 0;
        }
        
    }
        
}
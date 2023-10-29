// This is linear search
// Import string.h for strcmp method
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int numners[] = {20,500,10,5,100,1,50};

    int n = get_int("Number: ");
    for(int i=0; i<7; i++)
    {
        if (numbers[i])
        {
            printf("Found\n");
            // to indicate success and exit the program i ffound
            return 0;
        }
        
    }
    printf("Not found\n");
    // To indicate failure and end the program
    return 1;

}
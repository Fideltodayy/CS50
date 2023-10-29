#include <stdio.h>

int main (void)
{
    int numbers[] = {20,500,10,5,100,1,50};

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
    printf("Not found\n")

}
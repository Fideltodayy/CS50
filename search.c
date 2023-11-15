// This is linear search
// Import string.h for strcmp method
#include <string.h>
// Import cs50 for get_int and get_string methods
#include "cs50.h"
#include <stdio.h>

// int main (void)
// {
//     int numbers[] = {20,500,10,5,100,1,50};

//     int n = get_int("Number: ");
//     for(int i=0; i<7; i++)
//     {
//         if (numbers[i] == n)
//         {
//             printf("Found\n");
//             // to indicate success and exit the program i ffound
//             return 0;
//         }
        
//     }
//     printf("Not found\n");
//     // To indicate failure and end the program
//     return 1;

// }

int main (void){
    string names[] = {"Alice", "Bob", "Charlie", "David"};
    string s = get_string("String: ");
    for (int i = 0; i < 4; i++){
        if (strcmp(s, names[i]) == 0){
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
            
}
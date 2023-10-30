// #include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct      
{
    string name;
    string number;
}
person;


int main (void)
{
    person people[3];

    people[0].name = "John"; 
    people[0].number = "617-324-9876"; 
    people[1].name = "Bob";
    people[1].number = "555-555-5555";
    people[2].name = "Alice";
    people[2].number = "867-5309";

    string name = scanf("Name: ");
    for(int i=0; i<3; i++)
    {
        if (strcmp(people[i].name,name) == 0)
        {
            printf("Name: %s\nNumber: %s\n\n", people[i].name, people[i].number);
            return 0;
        }
        
    }
    printf("Not found\n");
    return 1;
        
}
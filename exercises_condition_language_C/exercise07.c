/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read a age and validate if people have vote.
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int age_people;

    // Read data user input
    printf("What you age: \n");
    scanf("%d", &age_people);

    // Validate input data
    if (age_people < 0)
    {
        printf("Age invalid, try again!");
        age_people = age_people * (-1);
        if (age_people >= 16)
        {
            printf("Congrats! you is vote.");
        }
        else
        {
            printf("You is dont vote!!");
        }
    }
    else
    {
        if (age_people >= 16)
        {
            printf("you is vote!! congrats");
        }
        else
        {
            printf("you dont vote!! Please waiting");
        }
    }

    return 0;
}
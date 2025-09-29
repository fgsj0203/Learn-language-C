/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read a age of people and classify if driving habilitation.
*/

#include <stdio.h>

int main()
{
    // section of variables
    int age_people;

    // Read data user input
    printf("What you age of people: \n");
    scanf("%d", &age_people);

    // Validation data input
    if (age_people < 0)
    {
        age_people = age_people * (-1);
        if (age_people >= 18)
        {
            printf("Congrats, you get licence driver. Age: %d\n", age_people);
        }
        else
        {
            printf("You not get licence. Please waiting. Age: %d\n", age_people);
        }
    }
    else
    {
        if (age_people >= 18)
        {
            printf("Congrats, you get licence driver. Age: %d\n", age_people);
        }
        else
        {
            printf("You not get licence driver. Age:%d \n", age_people);
        }
    }

    return 0;
}
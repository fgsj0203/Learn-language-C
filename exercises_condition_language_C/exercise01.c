/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: input a number and classify if number is positive, negative or zero. Validation data for only number.
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number, character_return;

    // Read data user input
    printf("Enter with a number: \n");
    character_return = scanf("%d", &number);

    // Validation of data user input
    if (character_return == 0)
    {
        printf("Data invalid, input only a number\n");
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
            ;
        printf("What a number: \n");
        scanf("%d", &number);
        if (number > 0)
        {
            printf("Number is positive. The number: %d", number);
        }
        else if (number < 0)
        {
            printf("Number is negative. The number: %d", number);
        }
        else
        {
            printf("The number is zero");
        }
        return 1;
    }
    else
    {
        if (number > 0)
        {
            printf("Number is positive. The number: %d", number);
        }
        else if (number < 0)
        {
            printf("Number is negative. The number: %d", number);
        }
        else
        {
            printf("The number is zero");
        }
        return 1;
    }

    return 0;
}
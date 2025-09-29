/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: input a number and identify if number is pair or odd. Validation for numbers negative.
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number;

    // Input a data user
    printf("Number: \n");
    scanf("%d", &number);

    // Validation of number
    if (number < 0)
    {
        number = number * (-1);
        if (number % 2 == 0)
        {
            printf("The number is pair. The number: %d", number);
        }
        else
        {
            printf("The number is odd. The number: %d", number);
        }
    }
    else
    {
        if (number % 2 == 0)
        {
            printf("The number is pair. The number: %d", number);
        }
        else
        {
            printf("The number is odd. The number: %d", number);
        }
    }

    return 0;
}
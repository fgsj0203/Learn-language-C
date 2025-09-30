/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read number and identify if number is interval closed [100, 200].
*/

#include <stdio.h>

int main()
{
    // section of variables
    int number;

    // Read data user input
    printf("Enter with a number: \n");
    scanf("%d", &number);

    // Validating input data user
    if (number >= 100 && number < 200)
    {
        printf("The number in interval. The number: %d", number);
    }
    else
    {
        printf("The number is not interval. The number: %d", number);
    }

    return 0;
}
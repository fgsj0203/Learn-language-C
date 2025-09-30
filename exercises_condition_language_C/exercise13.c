/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read number and identify if number is interval closed.
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number_interval;

    // Read data user input
    printf("Input a number: \n");
    scanf("%d", &number_interval);

    // Validate input a number
    if (number_interval > 10 && number_interval < 50)
    {
        printf("Number is valid. Number: %d", number_interval);
    }
    else
    {
        printf("Number is invalid. Number: %d", number_interval);
    }

    return 0;
}
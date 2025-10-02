/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Printing numbers pair interval 1-100 using loop "While"
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number = 1; // Started number

    while (number <= 100) // loop start a number;
    {
        if (number % 2 == 0) // Calculate of rest division for numbers pair;
        {
            printf("%d\n", number);
        }
        number++; // Controller of counter;
    }

    return 0;
}

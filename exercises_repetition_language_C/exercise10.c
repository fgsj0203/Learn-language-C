/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read a number while number is differente 0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number = 0, sum_number = 0, i = -1;

    // Using structure While for calculate
    while (i != 0)
    {
        printf("Input Number: (Enter with 0 - Exit)\n");
        scanf("%d", &number);
        sum_number += number;
        i = number;
    }
    printf("The sum of numbers: %d\n", sum_number);

    return 0;
}
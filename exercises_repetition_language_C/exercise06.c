/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Calculate sum of numbers odd in interval 1-50
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int sum_numbers_for = 0;
    int sum_numbers_while = 0;
    int i, j = 0;

    // Using loop "For"
    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 1)
        {
            sum_numbers_for += i;
        }
    }
    printf("The sum of numbers odd in loop 'For': %d\n", sum_numbers_for);
    printf("Using loop 'While'\n");
    while (j <= 50)
    {
        if (j % 2 == 1)
        {
            sum_numbers_while += j;
        }
        j++;
    }
    printf("Sum of numbers using loop 'while': %d \n", sum_numbers_while);

    return 0;
}
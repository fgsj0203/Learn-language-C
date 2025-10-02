/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Calculate sum of numbers in interval 1-100
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int sum_numbers_for = 0;
    int numbers_for = 0;
    int sum_numbers_while = 0;
    int numbers_while = 0;

    // Using loop "For"
    for (numbers_for = 0; numbers_for <= 100; numbers_for++)
    {
        sum_numbers_for += numbers_for;
    }
    // printing sum of numbers
    printf("Loop For = %d\n", sum_numbers_for);
    printf("---------------------------------------------\n");
    while (numbers_while <= 100)
    {
        sum_numbers_while += numbers_while;
        numbers_while++;
    }
    printf("loop While = %d\n", sum_numbers_while);

    return 0;
}
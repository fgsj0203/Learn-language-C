/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read a number N and printing a sum of numbers between 1 a N
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int sum_numbers_for = 0, sum_numbers_while = 0, number;
    int i, j = 0;

    // Read data user input
    printf("Number: \n");
    scanf("%d", &number);

    // Using structure loop for sum of numbers
    for (i = 1; i <= number; i++)
    {
        sum_numbers_for += i;
    }
    printf("Sum of numbers using loop 'For': %d\n", sum_numbers_for);

    // Using structure While
    while (j <= number)
    {
        sum_numbers_while += j;
        j++;
    }
    printf("Sum of numbers using loop 'While': %d\n", sum_numbers_while);

    return 0;
}
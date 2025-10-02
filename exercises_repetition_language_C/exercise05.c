/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Calculate sum of numbers pair in interval 1-50
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int sum_numbers_pair = 0;
    int counter_numbers_while = 0;
    int numbers_for, numbers_while;

    // Using loop "For" for calculate pair sum numbers
    for (numbers_for = 1; numbers_for <= 50; numbers_for++)
    {
        if (numbers_for % 2 == 0)
        {
            sum_numbers_pair += numbers_for;
        }
    }
    // Printing value of sum numbers only pair
    printf("Sum of numbers pair using loop 'For' = %d\n", sum_numbers_pair);
    printf("----------------------------------------------------\n");
    printf("Using loop 'While'");
    while (numbers_while >= 1 && numbers_while <= 50)
    {
        if (numbers_while % 2 == 0)
        {
            sum_numbers_pair += numbers_while;
        }
        counter_numbers_while++;
    }

    printf("Sum of numbers pair using loop 'While = ' %d\n", sum_numbers_pair);

    return 0;
}
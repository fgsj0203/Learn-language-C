/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Printing numbers odd interval 1-100 using loop "For"
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number = 1;

    // loop for numbers odd
    for (number = 1; number <= 100; number++)
    {
        if (number % 2 == 1)
        {
            printf("%d\n", number);
        }
    }

    return 0;
}
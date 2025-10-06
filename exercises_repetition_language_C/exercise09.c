/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read a number N and printing a calculate table value in range 1-10 of number
*/

#include <stdio.h>

int main()
{
    // section of variables
    int number, i;

    // read da data user input
    printf("Number: \n");
    scanf("%d", &number);

    // Using loop "for" for solution
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, number, (i * number));
    }

    return 0;
}
/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read a number N and printing a interval number between 1 a N
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number;
    int i, j;

    // Read data user input
    printf("Input a number: \n");
    scanf("%d", &number);

    printf("Started loop..........\n");

    // Using structure repetition
    for (i = 1; i <= number; i++)
    {
        printf("%d\n", i);
    }
}

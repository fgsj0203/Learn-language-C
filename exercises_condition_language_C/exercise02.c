/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: input a two number and identify what is bigger number. If two numbers is equal, notify user.
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number_one, number_two;

    // Read a data user input
    printf("Number one: \n");
    scanf("%d", &number_one);

    printf("Number two: \n");
    scanf("%d", &number_two);

    // Validation input data user.
    if (number_one == number_two)
    {
        printf("Two numbers is equal.\n");
    }

    else if (number_one > number_two)
    {
        printf("The number one is bigger. The number is: %d\n", number_one);
    }
    else
    {
        printf("The number two is bigger. The number is: %d\n", number_two);
    }

    return 0;
}

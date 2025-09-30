/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read two numbers and calculate of sum is bigger 100
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number_one, number_two;

    // Read data user input
    printf("Number one: \n");
    scanf("%d", &number_one);

    printf("Number two: \n");
    scanf("%d", &number_two);

    // Validating condition
    if ((number_one + number_two) > 100)
    {
        printf("The sum of two numbers is bigger 100.\n");
        printf("The numbers of sum is: %d + %d = %d", number_one, number_two, (number_one + number_two));
    }
    else
    {
        printf("The sum of two numbers is smaller 100.\n");
        printf("The numbers of sum is: %d + %d = %d", number_one, number_two, (number_one + number_two));
    }

    return 0;
}
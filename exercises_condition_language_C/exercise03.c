/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: input a three number and identify what is smaller number.
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number_one, number_two, number_three;

    // Read data user input
    printf("Number one: \n");
    scanf("%d", &number_one);

    printf("Number two: \n");
    scanf("%d", &number_two);

    printf("Number three: \n");
    scanf("%d", &number_three);

    // Validation data of user input
    if (number_one < number_two && number_one < number_three)
    {
        printf("Number one is smaller. the number: %d", number_one);
    }
    else if (number_two < number_three)
    {
        printf("Number two is smaller. The number: %d", number_two);
    }
    else
    {
        printf("Number three is smaller. The number: %d", number_three);
    }

    return 0;
}
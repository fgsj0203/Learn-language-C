/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read a three sides of triangle and calculate if triangle is valid.
*/

#include <stdio.h>

int main()
{
    // Section of variables
    float side_one, side_two, side_three;
    // Read data user input
    printf("Side one: \n");
    scanf("%f", &side_one);

    printf("Side two: \n");
    scanf("%f", &side_two);

    printf("Side three: \n");
    scanf("%f", &side_three);

    // Validating data for triangle
    if ((side_one + side_two) > side_three)
    {
        printf("Triangle is valid. Congrats.");
    }
    else
    {
        printf("Triangle is not valid. Try again.");
    }

    return 0;
}
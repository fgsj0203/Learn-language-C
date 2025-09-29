/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read a number in between 1-7 and inform a day of week.
*/

#include <stdio.h>

int main()
{
    // section of variables
    int number_week_day;

    // Read data user input
    printf("Select a number in between 1-7: \n");
    scanf("%d", &number_week_day);

    // Validate user input data
    if (number_week_day < 1 || number_week_day > 7)
    {
        printf("Day invalid, try again!!\n");
        printf("What a number day: \n");
        scanf("%d", &number_week_day);
        if (number_week_day == 1)
        {
            printf("Domingo");
        }
        else if (number_week_day == 2)
        {
            printf("Segunda feira");
        }
        else if (number_week_day == 3)
        {
            printf("Terça Feira");
        }
        else if (number_week_day == 4)
        {
            printf("Quarta Feira");
        }
        else if (number_week_day == 5)
        {
            printf("Quinta Feira");
        }
        else if (number_week_day == 6)
        {
            printf("Sexta Feira");
        }
        else if (number_week_day == 7)
        {
            printf("Sábado");
        }
    }
    else
    {
        if (number_week_day == 1)
        {
            printf("Domingo");
        }
        else if (number_week_day == 2)
        {
            printf("Segunda feira");
        }
        else if (number_week_day == 3)
        {
            printf("Terça Feira");
        }
        else if (number_week_day == 4)
        {
            printf("Quarta Feira");
        }
        else if (number_week_day == 5)
        {
            printf("Quinta Feira");
        }
        else if (number_week_day == 6)
        {
            printf("Sexta Feira");
        }
        else if (number_week_day == 7)
        {
            printf("Sábado");
        }
    }

    return 0;
}

/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read a number in between 1-12 and classified of month in year.
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number_month_year;

    // Read a data user
    printf("Input a number in between 1-12: \n");
    scanf("%d", &number_month_year);
    if (number_month_year > 12 || number_month_year < 1)
    {
        printf("Number month is invalid. Try again!");
        printf("Number of month: \n");
        scanf("%d", &number_month_year);
        if (number_month_year == 1)
        {
            printf("Janeiro");
        }
        else if (number_month_year == 2)
        {
            printf("Fevereiro");
        }
        else if (number_month_year == 3)
        {
            printf("Março");
        }
        else if (number_month_year == 4)
        {
            printf("Abril");
        }
        else if (number_month_year == 5)
        {
            printf("Maio");
        }
        else if (number_month_year == 6)
        {
            printf("Junho");
        }
        else if (number_month_year == 7)
        {
            printf("Julho");
        }
        else if (number_month_year == 8)
        {
            printf("Agosto");
        }
        else if (number_month_year == 9)
        {
            printf("Setembro");
        }
        else if (number_month_year == 10)
        {
            printf("Outubro");
        }
        else if (number_month_year == 11)
        {
            printf("Novembro");
        }
        else
        {
            printf("Dezembro");
        }
    }
    else
    {

        if (number_month_year == 1)

        {
            printf("Janeiro");
        }
        else if (number_month_year == 2)

        {
            printf("Fevereiro");
        }
        else if (number_month_year == 3)

        {
            printf("Março");
        }
        else if (number_month_year == 4)

        {
            printf("Abril");
        }
        else if (number_month_year == 5)

        {
            printf("Maio");
        }
        else if (number_month_year == 6)

        {
            printf("Junho");
        }
        else if (number_month_year == 7)

        {
            printf("Julho");
        }
        else if (number_month_year == 8)

        {
            printf("Agosto");
        }
        else if (number_month_year == 9)

        {
            printf("Setembro");
        }
        else if (number_month_year == 10)

        {
            printf("Outubro");
        }
        else if (number_month_year == 11)

        {
            printf("Novembro");
        }
        else
        {
            printf("Dezembro");
        }
    }

    return 0;
}
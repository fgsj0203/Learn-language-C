/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read password and comparate a "1234"
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int password_data;

    // Read a data user input
    printf("What you password: \n");
    scanf("%d", &password_data);

    // Validating input data user
    if (password_data == 1234)
    {
        printf("Access allowed");
    }
    else
    {
        printf("Access denied");
    }

    return 0;
}
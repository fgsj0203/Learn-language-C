/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read a data of Weight and Height, calculate IMC and notify of user a condition health
*/

#include <stdio.h>

int main()
{
    // section of variables
    float weight_people, height_people, imc_people;

    // Read a data user
    printf("What you weight: \n");
    scanf("%f", &weight_people);

    printf("What you height: \n");
    scanf("%f", &height_people);

    imc_people = weight_people / (height_people * height_people);

    // validating data user input and calculate IMC of people
    printf("You IMC is: %.2f\n", imc_people);

    // Validating condition of health people
    if (imc_people < 18.5)
    {
        printf("You have IMC smaller of healthy. \n");
    }
    else if (imc_people >= 18.5 && imc_people <= 24.99)
    {
        printf("You have IMC normal. \n");
    }
    else if (imc_people >= 25.00 && imc_people <= 29.99)
    {
        printf("You have IMC is smaller overweight. \n");
    }
    else
    {
        printf("You is obese, you need urgent for care you health. \n");
    }
    return 0;
}
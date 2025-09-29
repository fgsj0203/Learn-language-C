/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read a letter and identify if letter is vowel or consonant.
*/

#include <stdio.h>

int main()
{
    // Section of variables
    char letter;
    int character_return;

    // Read data user
    printf("What a letter: \n");
    character_return = scanf("%d", &character_return);

    // Validate data user
    if (character_return == 1)
    {
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) // Cleaning a buffer in memory of variables.
            ;
        printf("You input a letter. Only number please.\n");
        printf("What a letter: \n");
        scanf("%c", &letter);
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        {
            printf("You letter is vowel. The letter is: %c", letter);
        }
        else
        {
            printf("You letter is consonant. The letter is: %c", letter);
        }
    }

    return 0;
}
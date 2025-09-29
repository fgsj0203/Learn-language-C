/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read a three notes and calculate a average of notes and printing final situation. If approved, reproved or in recuperation.
*/

#include <stdio.h>

int main()
{
    // Section of variables
    float note_one, note_two, note_three, average_notes;

    // Read data user input
    printf("Note one: \n");
    scanf("%f", &note_one);
    if (note_one > 10 || note_one < 0)
    {
        printf("Note invalid, input note in range 0-10\n");
        printf("Note one: \n");
        scanf("%f", &note_one);
    }

    printf("Note two: \n");
    scanf("%f", &note_two);
    if (note_two > 10 || note_two < 0)
    {
        printf("Note invalid, input a note in range 0-10\n");
        printf("Note two: \n");
        scanf("%f", &note_two);
    }

    printf("Note three: \n");
    scanf("%f", &note_three);
    if (note_three > 10 || note_three < 0)
    {
        printf("Note invalid, input a note in range 0-10\n");
        printf("Note three: \n");
        scanf("%f", &note_three);
    }

    average_notes = (note_one + note_two + note_three) / 3.0;

    // Validation of situation student
    if (average_notes >= 7)
    {
        printf("Congrats. You is approved. You average notes is: %.2f", average_notes);
    }
    else if (average_notes < 7 && average_notes >= 5)
    {
        printf("In recuperation. You average of notes: %.2f", average_notes);
    }
    else
    {
        printf("You is reproved. Try again. You average of notes: %.2f", average_notes);
    }

    return 0;
}
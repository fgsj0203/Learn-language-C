/*
Author: Francisco Gomes da Silva Junior
College: Estacio de Sa
Period: 1
Course: Computer Science
Discipline: Introduction Programming a language C
Description: Read three notes, discard a smaller note and calculate average with others two notes
*/

#include <stdio.h>

int main()
{
    // Section of variables
    float note_one, note_two, note_three, average_notes;

    // Read data user input
    printf("Note one: \n");
    scanf("%f", &note_one);

    printf("Note two: \n");
    scanf("%f", &note_two);

    printf("Note three: \n");
    scanf("%f", &note_three);

    // Identify a smaller note
    if (note_one < note_two && note_one < note_three)
    {
        printf("Smaller one note. The note: %.2f\n", note_one);
        printf("Note one: %.2f is discard\n", note_one);
        average_notes = (note_two + note_three) / 2.0;
        printf("The average of notes is: %.2f", average_notes);
    }
    else if (note_two < note_three)
    {
        printf("Smaller note two. The note: %.2f\n", note_two);
        printf("Note two: %.2f is discard.\n", note_two);
        average_notes = (note_one + note_three) / 2.0;
        printf("The average of notes is: %.2f", average_notes);
    }
    else
    {
        printf("Smaller note three. The note: %.2f\n", note_three);
        printf("Note three: %.2f is discard.\n", note_three);
        average_notes = (note_one + note_two) / 2.0;
        printf("The average of notes is: %.2f", average_notes);
    }

    return 0;
}
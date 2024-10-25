// utils.c
// Romaric Assogba, this 25 oct. 2024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#include "colors.h"


// functions
int input(char prompt[], char entree[])
{
    printf("%s", prompt);
    if (fgets(entree, MAX_READ_SIZE, stdin) != NULL)
    {
        if (entree[strlen(entree) - 1] = '\n')
            entree[strlen(entree) - 1] = '\0';
        return 1;
    }
    return 0;
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void ask_int_between(int a, int b, int *entree)
{
    int success;
    do
    {
        printf("Choisir un numéro entre %d et %d: ", a, b);
        success = scanf("%d", entree);
        clear_input_buffer();
        if (!success || *entree < a || *entree > b)
        {
                printf(BOLD TEXT_RED "Entrée invalide\n" RESET);
        }
    } while (!success || *entree < a || *entree > b);
    
}

int confirm(char prompt[])
{
    int choice = 0;
    printf("%s. Annuler[0] - Oui[1]\n", prompt);
    ask_int_between(0, 1, &choice);
    return choice;
}

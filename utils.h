// utils.h
// Romaric Assogba, this 25 oct. 2024

#ifndef UTILS_H
#define UTILS_H

// macros
#define MAX_READ_SIZE 1000


// function prototypes
int input(char prompt[], char entree[]);
void clear_input_buffer();
void ask_int_between(int a, int b, int *entree);
int confirm(char prompt[]);


#endif // UTILS_H

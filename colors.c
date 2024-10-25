// app.c
// Romaric Assogba, this 24 oct. 2024

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000


void create_colored_string(int r, int g, int b, const char* text, char* output) 
{
    // Format the string with the RGB values into the output array
    snprintf(output, MAX_SIZE, "\033[38;2;%d;%d;%dm%s\033[0m", r, g, b, text);
}

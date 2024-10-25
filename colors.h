// colors.h
// Romaric Assogba, this 24 oct. 2024

#ifndef COLORS_H
#define COLORS_H

// colors.h

// Reset
#define RESET "\033[0m"

// Text colors
#define TEXT_BLACK "\033[30m"
#define TEXT_RED "\033[31m"
#define TEXT_GREEN "\033[32m"
#define TEXT_YELLOW "\033[33m"
#define TEXT_BLUE "\033[34m"
#define TEXT_MAGENTA "\033[35m"
#define TEXT_CYAN "\033[36m"
#define TEXT_WHITE "\033[37m"
#define TEXT_GRAY "\033[90m"         // Gris clair
#define TEXT_LIGHT_RED "\033[91m"    // Rouge clair
#define TEXT_LIGHT_GREEN "\033[92m"  // Vert clair
#define TEXT_LIGHT_YELLOW "\033[93m" // Jaune clair
#define TEXT_LIGHT_BLUE "\033[94m"   // Bleu clair
#define TEXT_LIGHT_MAGENTA "\033[95m"// Magenta clair
#define TEXT_LIGHT_CYAN "\033[96m"   // Cyan clair
#define TEXT_BRIGHT_WHITE "\033[97m" // Blanc brillant

// Background colors
#define BG_BLACK "\033[40m"
#define BG_RED "\033[41m"
#define BG_GREEN "\033[42m"
#define BG_YELLOW "\033[43m"
#define BG_BLUE "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN "\033[46m"
#define BG_WHITE "\033[47m"
#define BG_GRAY "\033[100m"         // Fond gris clair
#define BG_LIGHT_RED "\033[101m"    // Fond rouge clair
#define BG_LIGHT_GREEN "\033[102m"  // Fond vert clair
#define BG_LIGHT_YELLOW "\033[103m" // Fond jaune clair
#define BG_LIGHT_BLUE "\033[104m"   // Fond bleu clair
#define BG_LIGHT_MAGENTA "\033[105m"// Fond magenta clair
#define BG_LIGHT_CYAN "\033[106m"   // Fond cyan clair
#define BG_BRIGHT_WHITE "\033[107m" // Fond blanc brillant

// Text styles
#define BOLD "\033[1m"
#define ITALIC "\033[3m"      // Italique (si supporté)
#define UNDERLINE "\033[4m"   // Souligné
#define INVERT "\033[7m"      // Couleurs inversées


// functions prototypes
void create_colored_string(int r, int g, int b, const char* text, char* output);

#endif // COLORS_H

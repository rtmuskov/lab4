#include "stok.h"
#include "stdlib.h"
int kl (char h, char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == h)
            return 1;
}
    return 0;
}
char* stok(char*s, char* dels) {
    static char* input = NULL;
    if (s != NULL)
        input = s;
    if (input == NULL)
        return NULL;
    if (*input== '\0')
        return NULL;
    while (kl(*input, dels))
        (input)++;
    char* begin = input;
    while (kl(*input, dels) == 0 && *input != '\0')
        (input)++;

    if (*input != '\0') {

        *input = '\0';
        input++;

    }

    return begin;

}



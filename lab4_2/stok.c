#include "stok.h"
#include "stdlib.h"
#include "slen.h"

char *stok(char *s, char delim) {
    static char* input = NULL;
    if (s != NULL)
        input = s;
    if (input == NULL)
        return NULL;
    char *result = malloc(slen(input) + 1);
    int i = 0;
    for(; input [i] != '\0'; i++) {
        if (input[i] != delim) {
            result[i] = input[i];
        }
        else {
            result[i] = '\0';
            input = input + i + 1;
            return result;
        }
    }
    result[i] = '\0';
    input = NULL;

    return result;
}
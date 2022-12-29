#include "sdup.h"
#include "slen.h"
#include <stdlib.h>
char *sdup(char *from) {
    int col = slen(from);
    char *to = malloc((col + 1) * sizeof(char));
    for (int j = 0; j <= col; j++) {
        to[j] = from[j];
    }
    return to;
}
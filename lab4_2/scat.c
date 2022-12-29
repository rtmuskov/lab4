#include "scat.h"
#include <stdlib.h>
#include "slen.h"
#include "sdup.h"
char *scat(char *out, char *in) {
    char *temp = sdup(in);
    int col_in = slen(in);
    int col_out = slen(out);
    char *res = malloc(col_in + col_out + 1);
    int i;
    for (i = 0; i < col_out; i++) {
        res[i] = out[i];
    }
    for (int j = 0; j <= col_in; j++) {
        res[i + j + 1] = out[i + j + 1];
    }

    return out;
}
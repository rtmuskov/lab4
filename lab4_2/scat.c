#include "scat.h"
#include <stdlib.h>
#include "slen.h"
#include "sdup.h"
char *scat(char *out, char *in) {
    char *temp = sdup(in);
    int col_in = slen(in);
    int col_out = slen(out);
    char *res = calloc(col_in + col_out + 1, sizeof(char));
    int i;
    int k = 1;
    for (i = 0; i < col_out; i++) {
        res[i] = out[i];
    }
    if (i == 0) {
        k = 0;
    }
    for (int j = 0; j <= col_in; j++) {
        res[i + j] = temp[j];
    }

    return res;
}
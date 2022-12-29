#include "stok.h"
#include "stdlib.h"
#include "slen.h"
char *stok(char *str, char *delim) {
    static char *olds;
    char *end;
    if (str == NULL) {
        str = olds;
    }
    int b = slen(str);
    str += b;
    end = str;
    while(('0' <= end[0])&&(end[0] <= 'z')) end++;
    end[0] = '\0';
    olds = end + 1;
    if (str == end) return NULL;
    return str;
}
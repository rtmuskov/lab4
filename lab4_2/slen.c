#include "slen.h"
int slen(char *string) {
    int col = 0;
    for(int i=0;string[i]!='\0';i++)
        col = col + 1;
    return col;
}
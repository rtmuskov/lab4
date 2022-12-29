#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "rd.h"
#define DELIM " \t"
#define PREFICS 'P'
int main() {
    char sogl[] = {"bBcCdDfFgGhHjJkKlLmMnNpPqQrRsStTvVwWxXyYzZ"};
    char *str = rd("\n>");
    char *str2 = strdup(str);
    char *out = calloc(strlen(str2) + 1, sizeof(char));
    char *lema = strtok(str2, DELIM);
    int col_lema = strlen(lema);
    int flag = 0;
    while (lema != NULL) {
        for (int j = 0; j < strlen(sogl); j++) {
            if (lema[0] == sogl[j]) {
                flag++;
                break;
            }
        }
        if (flag == 1) {
            lema = realloc(lema, strlen(lema) + 1);
            for (int i = strlen(lema); i > 0; i--) {
                lema[i] = lema[i - 1];
            }
            lema[0] = PREFICS;
            flag = 0;
        }
        out = strcat(out, lema);
        lema = strtok(NULL, DELIM);
        if (lema != NULL) {
            out = strcat(out, "");
        }
    }
    printf("%s", out);
}
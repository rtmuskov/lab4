#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rd.h"
#include "slen.h"
#include "sdup.h"
#include "scat.h"
#include "stok.h"
#define DELIMT "\t "
#define PREFICS 'J'
int main() {
    char *sv;
    char sogl[] = {"bBcCdDfFgGhHjJkKlLmMnNpPqQrRsStTvVwWxXyYzZ"};
    char *str = rd("\n>");
    char *str2 = sdup(str);
    char *out = calloc(slen(str2) + 1, sizeof(char));
    char *lema = stok(str2, DELIMT);
    char *d_lema;
    int col_dlema;
    int flag = 0;
    clock_t start = clock();
    while (lema != NULL) {
        for (int j = 0; j < slen(sogl); j++) {
            if (lema[0] == sogl[j]) {
                flag++;
                break;
            }
        }
        if (flag == 1) {
            d_lema = sdup(lema);
            col_dlema = slen(d_lema) + 1;
            d_lema = realloc(d_lema, col_dlema);
            for (int i = col_dlema; i > 0; i--) {
                d_lema[i] = d_lema[i - 1];
            }
            d_lema[0] = PREFICS;
            out = scat(out, d_lema);
            flag = 0;
        } else {
            out = scat(out, lema);
        }
        lema = stok(NULL,DELIMT);
        if (lema != NULL) {
            out = scat(out, " ");
        }
    }

    printf("Initial:\"%s\"\n", str);
    printf("Result:\"%s\"\n", out);
    if (str != NULL) {
        free(str);
    }
    if (str2 != NULL) {
        free(str2);
    }
    if (out != NULL) {
        free(out);
    }
    if (lema != NULL) {
        free(lema);
    }
    if (d_lema != NULL) {
        free(d_lema);
    }
    clock_t end = clock();
    printf("Second program worked: %lfs\n", (double)(end - start) / CLOCKS_PER_SEC);
}
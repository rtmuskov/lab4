#include "rd.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *rd(char *out) {
    int n = 1;
    char *output = malloc (81* sizeof(char));
    printf("%s", out);
    while (n > 0){
        n = scanf("%[^\n]", output);
        if(n < 0){
            if(output != NULL){
                free(output);
            }
            continue;
        }
        if(n == 0){
            scanf("%*[\n]");
        }
    }
    return output;
}
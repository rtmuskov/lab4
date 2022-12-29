#include "rd.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *rd(char *out) {
    int k = 1;
    char *output = malloc (81* sizeof(char));
    printf("%s", out);
    scanf("%[^\t\n]s", output);
    /*while (k > 0){
        k = scanf("%[^\n]", output);
        if(k < 0){
            if(output != NULL){
                free(output);
            }
            continue;
        }
        if(k == 0){
            scanf("%*[\n]");
        }
    }*/
    return output;
}
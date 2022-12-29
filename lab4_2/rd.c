#include "rd.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *rd(char *out) {
    char *output = malloc (81* sizeof(char));
    printf("%s", out);
    scanf("%[^\t\n]s", output);
    return output;
}
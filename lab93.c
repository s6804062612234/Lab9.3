/*
 * C Program to Remove all Characters in Second String which are 
 * present in First String 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[100], str2[100], str_rem[100];
    int i, j, k;
    int counts[100] = {0};
    int found[100] = {0};

    printf("Enter the First string:\n");
    fflush(stdin);
    gets(str1);

    printf("Enter the Second string:\n");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++) {
        k = 0;
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                counts[i]++;
                found[i] = 1;
            } else {
                str_rem[k] = str2[j];
                k++;
            }
        }
        str_rem[k] = '\0';
        strcpy(str2, str_rem);
    }

    printf("Result: %s\n", str_rem);

    for (i = 0; str1[i] != '\0'; i++) {
        if (found[i]) {
            printf("'%c' was deleted %d time(s)\n", str1[i], counts[i]);
        } else {
            printf("'%c' was not found\n", str1[i]);
        }
    }

    return 0;
}

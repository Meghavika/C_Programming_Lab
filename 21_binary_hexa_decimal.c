#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    printf("21BLC1667 Meghavika Baidya\n");
    char input[100];
    printf("Enter a number: ");
    scanf("%s", input);

    int len = strlen(input);
    int i = 0;
    while (i < len && (input[i] == '0' || input[i] == '1')) {
        i++;
    }

    if (i == len) {
        printf("The input is a binary number.\n");
    } else {
        i = 0;
        while (i < len && isxdigit(input[i])) {
            i++;
        }

        if (i == len) {
            printf("The input is a hexadecimal number.\n");
        } else {
            printf("The input is a decimal number.\n");
        }
    }

    int num = strtol(input, NULL, 0);
    if (num >= 0) {
        printf("This is having a positive number.\n");
    } else {
        printf("This is having a negative number.\n");
    }

    return 0;
}


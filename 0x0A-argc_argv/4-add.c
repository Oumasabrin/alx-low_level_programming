#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int main(int argc, char *argv[]) {
    int sum = 0;

    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        char *num = argv[i];

        for (int j = 0; num[j] != '\0'; j++) {
            if (!isdigit(num[j])) {
                printf("Error\n");
                return 1;
            }
        }

        int numValue = _atoi(num);
        if (numValue > 0)
            sum += numValue;
    }

    printf("%d\n", sum);
    return 0;
}

int _atoi(char *s) {
    int i, d, n, len, f, digit;

    i = 0;
    d = 0;
    n = 0;
    len = 0;
    f = 0;
    digit = 0;

    while (s[len] != '\0')
        len++;

    while (i < len && f == 0) {
        if (s[i] == '-')
            ++d;

        if (s[i] >= '0' && s[i] <= '9') {
            digit = s[i] - '0';
            if (d % 2)
                digit = -digit;
            n = n * 10 + digit;
            f = 1;
            if (s[i + 1] < '0' || s[i + 1] > '9')
                break;
            f = 0;
        }
        i++;
    }

    if (f == 0)
        return 0;

    return n;
}


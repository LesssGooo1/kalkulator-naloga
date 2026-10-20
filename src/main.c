#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"

int main(int argc, char *argv[]) {
    if (argc == 2 && strcmp(argv[1], "--version") == 0) {
        printf("calc %s\n", CALC_VERSION);
        return 0;
    }
    if (argc != 4) {
        fprintf(stderr, "Upotreba: %s <a> <operator> <b>\n", argv[0]);
        return 1;
    }

    double a = atof(argv[1]);
    char op = argv[2][0];
    double b = atof(argv[3]);
    double result;

    switch (op) {
        case '+': result = add(a, b);      break;
        case '-': result = subtract(a, b); break;
        case 'x': result = multiply(a, b); break;
        case '/':
            if (b == 0) {
                fprintf(stderr, "Greska: deljenje nulom\n");
                return 1;
            }
            result = divide(a, b);
            break;
        default:
            fprintf(stderr, "Nepoznat operator: %c\n", op);
            return 1;
    }

    printf("%g\n", result);
    return 0;
}

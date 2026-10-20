#include <stdio.h>
#include <math.h>
#include "calc.h"

static int failed = 0;

static void check(const char *name, double got, double expected) {
    if (fabs(got - expected) > 1e-9) {
        printf("FAIL: %s (dobijeno %g, ocekivano %g)\n", name, got, expected);
        failed++;
    } else {
        printf("OK:   %s\n", name);
    }
}

int main(void) {
    check("add 2+3", add(2, 3), 5);
    check("add -1+1", add(-1, 1), 0);
    check("subtract 5-3", subtract(5, 3), 2);
    check("subtract 3-5", subtract(3, 5), -2);
    return failed ? 1 : 0;
}

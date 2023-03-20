#include "NComplx.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    double a1, a2;
    a1 = 1.1;
    a2 = 2.2;

    NComplex *n1 = NComplex_create(a1, a2);
    NComplex *n2 = NComplex_create(3.3, 4.4);

    printf("\n Numeros complexos \n");

    NComplex_print(n1);
    printf("\n");
    NComplex_print(n2);

    printf("\n Soma dos numeros complexos \n");
    NComplex_print(n1);
    printf(" + ");
    NComplex_print(n2);
    NComplex *sum = NComplex_sum(n1, n2);
    printf(" = ");
    NComplex_print(sum);

    printf("\n Subtração dos numeros complexos \n");
    NComplex_print(n2);
    printf(" - ");
    NComplex_print(n1);
    NComplex *diff = NComplex_diff(n2, n1);
    printf(" = ");
    NComplex_print(diff);

    printf("\n Apagando numero complexo...\n");
    NComplex *destroy = NComplex_destroy(n1);
    return 0;
}
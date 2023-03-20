#include "Frac.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    NFrac *f1 = NFrac_create(2, 3); // fração 2/3
    NFrac *f2 = NFrac_create(1, 2); // fração 1/2

    printf("\n Operacoes com fracoes \n");

    NFrac_print(f1);
    printf("\n");
    NFrac_print(f2);


    printf("\n Soma das fracoes \n");

    NFrac_print(f1);
    printf(" + ");
    NFrac_print(f2);
    printf(" = ");

    NFrac *sum = NFrac_sum(f1, f2);
    NFrac_print(sum);


    printf("\n Multiplicaca de fracoes \n");

    NFrac_print(f1);
    printf(" * ");
    NFrac_print(f2);
    printf(" = ");

    NFrac *mult = NFrac_mult(f1, f2);
    NFrac_print(mult);


    printf("\nCheca se as fracoes sao iguais\n");

    NFrac_print(sum);
    printf(" e ");
    NFrac_print(mult);

    NFrac_equal(sum, mult);

    return 0;
}
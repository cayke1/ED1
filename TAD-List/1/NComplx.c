#include "NComplx.h"
#include <stdio.h>
#include <stdlib.h>

NComplex *NComplex_create(double real, double imag) {
    struct complex *new_complex = malloc(sizeof(struct complex));
    if(new_complex != NULL) {
        new_complex->real = real;
        new_complex->imag = imag;
    }
    return new_complex;
}

NComplex *NComplex_destroy(NComplex* complex) {
    if(complex == NULL) return NULL;
    free(complex);
    return NULL;
}

NComplex *NComplex_sum(NComplex *a, NComplex *b) {
    return NComplex_create(a->real + b-> real, a->imag + b-> imag);
}

NComplex *NComplex_diff(NComplex *a, NComplex *b) {
    return NComplex_create(a->real - b-> real, a->imag - b-> imag);
}

void NComplex_print(NComplex *ncomplex) {
  printf("%.2lf + i%.2lf", ncomplex->real, ncomplex->imag);
}
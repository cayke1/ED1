#ifndef NCOMPLX_H
#define NCOMPLX_H


struct complex {
    double real;
    double imag;
};

typedef struct complex NComplex;

/*
    * Cria instancias de Ncomplex.
    * @param x (float) numero real x
    * @param y (float) numero real y
    * @return (NComplex*) instancia para um numero complexo ou NULL em caso de falha de alocação de memória
*/

NComplex *NComplex_create(double real, double imag);

NComplex *NComplex_destroy(NComplex* complex);

NComplex *NComplex_sum(NComplex* a, NComplex* b);

NComplex *NComplex_diff(NComplex* a, NComplex* b);

void NComplex_print(NComplex *ncomplex);

#endif
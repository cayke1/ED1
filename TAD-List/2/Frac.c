#include "Frac.h"
#include <stdio.h>
#include <stdlib.h>

// Calcular o maximo divisor comum para 
// simplificar a fração
int mdc(int a, int b) {
    if(b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

NFrac *NFrac_create(int num, int den) {
    struct frac *new_frac = (NFrac *) malloc(sizeof(struct frac));
    if(new_frac != NULL) {
        new_frac->num = num;
        new_frac->den= den;
    };
    return new_frac;
}

NFrac *NFrac_sum(NFrac *a, NFrac *b) {
    // resNum / resDen = numerador no escopo
    // da função / denominador  no escopo da  função
    int resNum, resDen;
    // simpNum / simpDen = denominador / numerador
    // simplificado
    int simpNum, simpDen;
    resNum = (a->num * b->den) + (b->num * a->den);
    resDen = a->den * b->den;

    int divisor = mdc(resNum, resDen);

    simpNum = resNum / divisor;
    simpDen = resDen / divisor;
    
    return NFrac_create(simpNum, simpDen);
}

NFrac *NFrac_mult(NFrac *a, NFrac *b) {
    int resNum, resDen;
    int simpNum, simpDen;

    resNum = a->num * b->num;
    resDen = a->den * b->den;

    int divisor = mdc(resNum, resDen);

    simpNum = resNum / divisor;
    simpDen = resDen / divisor;

    return NFrac_create(simpNum, simpDen);
}

void *NFrac_equal(NFrac *a, NFrac *b) {
    int resNumA, resDenA, resNumB, resDenB; 
    int divisorA = mdc(a->num, a->den);
    int divisorB = mdc(b->num, a->num);

    resNumA = a->num / divisorA;
    resDenA = a->den / divisorA;

    resNumB = b->num / divisorB;
    resDenB = b->den / divisorB;
    if( resNumA == resNumB && resDenA == resDenB) {
        printf("\nAs frações são iguais\n");
    } else {
        printf("\nAs frações são diferentes\n");
    }
}

void NFrac_print(NFrac *n) {
    printf("%d/%d", n->num, n->den);
}



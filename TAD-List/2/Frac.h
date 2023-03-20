#ifndef FRAC_H
#define FRAC_H

struct frac {
    int num;
    int den;
};

typedef struct frac NFrac;

NFrac *NFrac_create(int num, int den);

NFrac *NFrac_sum(NFrac *a, NFrac *b);

NFrac *NFrac_mult(NFrac *a, NFrac *b);

void *NFrac_equal(NFrac *a, NFrac *b);

void NFrac_print(NFrac *n);


#endif
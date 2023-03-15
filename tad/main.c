#include "TPonto.h"
#include <stdio.h>

int main(void) {
  TPonto *p1 = TPonto_create(2.5, 3.33333);
  TPonto *p2 = TPonto_create(5.72829, 0.11111);
  TPonto_print(p1);
  TPonto_print(p2);
  printf("\n Dist euclidiana: %f\n", 
  TPonto_dist(p1,p2));

  TPonto_set(p1, 5, 6);
  printf("Valores modificados = ");
  TPonto_print(p1);
  return 0;
}
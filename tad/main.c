#include "TPonto.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float a1, a2;
  a1 = 1.1;
  a2 = 2.2;
  TPonto *p1 = TPonto_create(2.5, 3.33333);
  TPonto *p2 = TPonto_create(5.72829, 0.11111);
  float *p3 = malloc(sizeof (a1));
  float *p4 = malloc(sizeof(a2));
  TPonto_print(p1);
  TPonto_print(p2);
  printf("\n Dist euclidiana: %f\n", 
  TPonto_dist(p1,p2));

  TPonto_set(p1, 5, 6);
  printf("Valores modificados = ");
  TPonto_print(p1);


  printf("\n Pontos antes de _get ");
  printf("\n %.2f %.2f", a1, a2);
  TPonto_get(p1, p3, p4);
  printf("\n Pontos depois de _get ");
  printf("\n %.2f %.2f", *p3, *p4);
  
  return 0;
}
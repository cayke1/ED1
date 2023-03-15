#include <stdio.h>
#include "mylib1.h"

int main(void) {
  unsigned int size, temp;
  printf("Digite o tamanho do vetor\n");
  temp = scanf("%u", &size);
  int *V = vector_create_n_fill(size, 100);
  for(int i=0; i< size; i++)
    printf("%2d ", V[i]);
  return 0;
}
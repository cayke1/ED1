#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_vector(int *v, unsigned int size) {
  srand(time(NULL));
  for (int i = 0; i < size; i++)
    printf("%02d ", v[i]);
  putchar('\n');
}

void fill_vector(int *v, unsigned int size) {
  for (int i = 0; i < size; i++)
    v[i] = rand() % size * 2;
}

int main(void) {

  int **M;
  unsigned int size = 10;
  // 1. Alocar o vetor de ponteiros
  M = (int **)malloc(sizeof(int *) * size);
  if (M != NULL) {
    for (int i = 0; i < size; i++) {
      srand(time(NULL) + i);
      M[i] = (int *)malloc(sizeof(int) * size);
      if (M[i] == NULL) {
        printf("Problema ao alocar o vetor num %d\n", i + 1);
        return -1;
      }
      fill_vector(M[i], size);
      print_vector(M[i], size);
    }
  } else
    puts("Nao pude alocar o vetor de ponteiros!");

  return 0;
}
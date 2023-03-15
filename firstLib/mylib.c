#include "mylib1.h"
#include <stdlib.h>

int* vector_create_n_fill(unsigned int size, unsigned int max){
  int *V = (int*)malloc(sizeof(int)*size);
  if(V!=NULL)
    for(int i=0; i<size; i++)
      V[i] = rand()%max;
  return V;
}
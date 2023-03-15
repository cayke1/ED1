 #ifndef MYLIB1_H
#define MYLIB1_H
/**
 * Aloca memoria e preenche o vetor com numeros pseudo aleatorios de no maximo
 * max
 * @param size (unsigned int) tamanho do vetor
 * @param max (unsigned int) limite superior para os valores pseudo aleatorios.
 * @return V (int*) endereço do vetor alocado ou NULL em caso de f alocação.
 */
int* vector_create_n_fill(unsigned int, unsigned int);

#endif
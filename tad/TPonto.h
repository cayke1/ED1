#ifndef TPONTO_H
#define TPONTO_H

typedef struct ponto TPonto;
/**
 * Cria instâncias de TPonto.
 * @param x (float) coordenada x
 * @param y (float) coordenada y
 * @return (TPonto*) instância para um ponto preenchido ou NULL em caso de falha
 * de alocação de memória.
 */
TPonto *TPonto_create(float, float);
/**
 * Imprime uma instância do TPonto formatada.
 * @param TPonto* ponto a ser impresso
 */
void TPonto_print(TPonto *);

/**
 * Calcula a dist. euclidiana entre dois pontos
 * @param TPonto* primeiro ponto
 * @param TPonto* segundo ponto
 * @return (float) calculo da distância
 */

float TPonto_dist(TPonto*, TPonto*);

/**
* Modifica os valores de x e y do ponto
* @param (TPonto*) ponto a ser modificado
* @param (float) valor da coord. x
* @param (float) valor da coord y
*/

void TPonto_set(TPonto*, float, float);

/**
* Copia os valores de x e y do ponto para as variáveis passadas como parametro.
* @param (TPonto*) ponto a ser modificado
* @param (float*) ponteiro para a variavel x desejada
* @param (float*) ponteiro para a variãvel y desejada
*/

void TPonto_get(TPonto*, float*, float*);

#endif
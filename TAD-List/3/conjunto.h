#ifndef CONJUNTO_H
#define CONJUNTO_H

struct conj {
    int *elementos;
    int tamanho;
};

typedef struct conj Conjunto;


Conjunto* conjunto_criar();


void conjunto_inserir(Conjunto *conj, int elemento);


void conjunto_remover(Conjunto *conj, int elemento);


Conjunto* conjunto_intersecao(Conjunto *conj1, Conjunto *conj2);


Conjunto* conjunto_diferenca(Conjunto *conj1, Conjunto *conj2);


Conjunto* conjunto_uniao(Conjunto *conj1, Conjunto *conj2);

// Retorna o maior valor do conjunto
int conjunto_maior(Conjunto *conj);

// Retorna o menor valor do conjunto
int conjunto_menor(Conjunto *conj);


int conjunto_iguais(Conjunto *conj1, Conjunto *conj2);


void conjunto_tamanho(Conjunto *conj);


int conjunto_vazio(Conjunto *conj);


void conjunto_print(Conjunto *conj);


void conjunto_destruir(Conjunto *conj);

#endif

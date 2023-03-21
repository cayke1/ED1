#include "conjunto.h"
#include <stdlib.h>
#include <stdio.h>

Conjunto* conjunto_criar() {
    struct conj *novo_conjunto = (Conjunto *) malloc(sizeof(Conjunto));
    if(novo_conjunto != NULL) {
        novo_conjunto->elementos = NULL;
        novo_conjunto->tamanho = 0;
        return novo_conjunto;
    }
    return novo_conjunto;
}

void conjunto_inserir(Conjunto *conj, int elemento) {
    if(conj == NULL) {
        printf("\nO conjunto nao existe\n");
    }
    int i, existe = 0;

    for (i = 0; i < conj->tamanho; i++) {
        if(conj->elementos[i] == elemento) {
            existe = 1;
            break;
        }
    }
    if(!existe) {
        conj->tamanho++;
        conj->elementos = (int *) realloc(conj->elementos, conj->tamanho * sizeof(int));
        conj->elementos[conj->tamanho - 1] = elemento;
    }
}

void conjunto_remover(Conjunto *conj, int elemento) {
    if(conj == NULL) {
        printf("\nO conjunto nao existe\n");
         
    }
    int i, j, existe = 0;

    for(i = 0; i < conj->tamanho; i++) {
        if(conj->elementos[i] == elemento) {
            existe = 1;
            break;
        }
    }

    if(existe == 1) {
        for(j = i; j < conj->tamanho - 1; j++) {
            conj-> elementos[j] = conj->elementos[j + 1];
        }
        conj->tamanho--;
        if(conj->tamanho > 0) {
            conj->elementos = (int *) realloc(conj->elementos, conj->tamanho * sizeof(int));
        } else {
            free(conj->elementos);
            conj->elementos = NULL;
        }
        printf("\nElemento removido\n");
    } else {
        printf("\nEste elemento nao existe\n");
    }
}

Conjunto* conjunto_intersecao(Conjunto *conj1, Conjunto *conj2) {
    if(conj1 == NULL || conj2 == NULL) {
        printf("\nAlgum dos conjuntos nao existe\n");
        return NULL;
    }
    Conjunto *conj = conjunto_criar();
    int i, j;

    for(i = 0; i < conj1->tamanho; i++) {
        for(j = 0; j < conj2->tamanho; j++) {
            if(conj1->elementos[i] == conj2->elementos[j]) {
                conjunto_inserir(conj, conj1->elementos[i]);
            }
        }
    }

    return conj;
}

Conjunto* conjunto_diferenca(Conjunto *conj1, Conjunto *conj2) {
    if(conj1 == NULL || conj2 == NULL) {
        printf("\nAlgum dos conjuntos nao existe\n");
        return NULL;
    }

    Conjunto *conj = conjunto_criar();
    int i, j, ambos;

    for(i = 0; i < conj1->tamanho; i++){
        ambos = 0;
        for(j = 0; j < conj2->tamanho; j++){
            if(conj1->elementos[i] == conj2->elementos[j]) {
                ambos = 1;
                break;
            }
        }
        if(ambos == 0) {
            conjunto_inserir(conj, conj1->elementos[i]);
        }
    }
    
    return conj;
}

Conjunto* conjunto_uniao(Conjunto *conj1, Conjunto *conj2) {
    if(conj1 == NULL || conj2 == NULL) {
        printf("\nAlgum dos conjuntos nao existe\n");
         
    }
    Conjunto *conj = conjunto_criar();
    int i;

    for (i = 0; i < conj1->tamanho; i++) {
        conjunto_inserir(conj, conj1->elementos[i]);
    }
    for (i = 0; i < conj2->tamanho; i++) {
        conjunto_inserir(conj, conj2->elementos[i]);
    }

    return conj;
}

int conjunto_maior(Conjunto *conj) {
    if(conj == NULL) {
        printf("\nO conjunto nao existe\n");
         
    }
    int i, maior = 0;

    for(i = 0; i < conj->tamanho; i++) {
        if(conj->elementos[i] > maior) {
            maior = conj->elementos[i];
        }
    }

    return maior;
}

int conjunto_menor(Conjunto *conj) {
    if(conj == NULL) {
        printf("\nO conjunto nao existe\n");
         
    }
    int i, menor = conj->elementos[0];

    for(i = 0; i < conj->tamanho; i++) {
        if(conj->elementos[i] < menor) {
            menor = conj->elementos[i];
        }
    }

    return menor;
}

int conjunto_iguais(Conjunto *conj1, Conjunto *conj2) {
    if(conj1 == NULL || conj2 == NULL) {
        printf("\nAlgum dos conjuntos nao existe\n");
        return 0;
    }
    if(conj1->tamanho != conj2->tamanho) {
        return 0;
    }
    int i, j, iguais = 1;

    for(i = 0; i < conj1->tamanho; i++) {
        for(j = 0; j < conj2->tamanho; j++) {
            if(conj1->elementos[i] == conj2->elementos[j]) {
                break;
            }
        }
        if(j == conj2->tamanho) {
            iguais = 0;
            break;
        }
    }

    return iguais;
}

void conjunto_tamanho(Conjunto *conj) {
    if(conj == NULL) {
        printf("\nO conjunto nao existe\n");
         
    }

    printf("%d", conj->tamanho);
}

int conjunto_vazio(Conjunto *conj) {
    if(conj == NULL) {
        printf("\nO conjunto nao existe\n");
        return 1;
    }

    if(conj->tamanho == 0) {
        printf("Conjunto vazio\n");
        return 1;
    } else {
        return 0;
    }
}

void conjunto_print(Conjunto *conj) {
    conjunto_vazio(conj);

    printf("{ ");
    for (int i = 0; i < conj->tamanho; i++) {
        printf("%d ", conj->elementos[i]);
    }
    printf("}\n");
}

void conjunto_destruir(Conjunto *conj) {
    free(conj);
}
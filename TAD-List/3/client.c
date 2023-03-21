#include <stdio.h>
#include "conjunto.h"

int main() {
    Conjunto *conj1, *conj2, *conj3;

    // Criação dos conjuntos
    conj1 = conjunto_criar();
    conj2 = conjunto_criar();
    conj3 = conjunto_criar();

    // Inserção de elementos nos conjuntos
    conjunto_inserir(conj1, 4);
    conjunto_inserir(conj1, 2);
    conjunto_inserir(conj1, 6);
    conjunto_inserir(conj1, 8);
    conjunto_inserir(conj1, 10);

    conjunto_inserir(conj2, 3);
    conjunto_inserir(conj2, 6);
    conjunto_inserir(conj2, 9);

    conjunto_inserir(conj3, 1);
    conjunto_inserir(conj3, 2);
    conjunto_inserir(conj3, 3);
    conjunto_inserir(conj3, 4);
    conjunto_inserir(conj3, 5);

    // Impressão dos conjuntos
    printf("Conjunto 1: ");
    conjunto_print(conj1);
    printf("Conjunto 2: ");
    conjunto_print(conj2);
    printf("Conjunto 3: ");
    conjunto_print(conj3);

    // Interseção entre os conjuntos 1 e 2
    printf("\nIntersecao entre conjunto 1 e conjunto 2: ");
    Conjunto *intersecao = conjunto_intersecao(conj1, conj2);
    conjunto_print(intersecao);
    conjunto_destruir(intersecao);


    // Diferença entre os conjuntos 1 e 2
    printf("\nDiferenca entre conjunto 1 e conjunto 2: ");
    Conjunto *diferenca = conjunto_diferenca(conj1, conj2);
    conjunto_print(diferenca);
    conjunto_destruir(diferenca);


    // União entre os conjuntos 1 e 2
    printf("\nUniao entre conjunto 1 e conjunto 2: ");
    Conjunto *uniao = conjunto_uniao(conj1, conj2);
    conjunto_print(uniao);
    conjunto_destruir(uniao);
    

    // Maior e menor valor do conjunto 1
    printf("\nMaior valor do conjunto 1: %d\n", conjunto_maior(conj1));
    printf("Menor valor do conjunto 1: %d\n", conjunto_menor(conj1));

    // Verifica se os conjuntos 1 e 3 são iguais
    printf("\nConjunto 1 e conjunto 3 sao iguais: ");
    int verificaIgualdade = conjunto_iguais(conj1, conj3);
    if(verificaIgualdade == 1) {
        printf("\nSim\n");
    } else {
        printf("\nNao\n");
    }

    // Tamanho e verificação se o conjunto 3 está vazio
    printf("\nTamanho do conjunto 3: ");
    conjunto_tamanho(conj3);
    printf("\nO conjunto 3 esta vazio: %d\n", conjunto_vazio(conj3));

    // Remoção de um elemento do conjunto 3
    printf("\nRemovendo o elemento 3 do conjunto 3...\n");
    conjunto_remover(conj3, 3);
    printf("Conjunto 3: ");
    conjunto_print(conj3);

    // Liberação de memória dos conjuntos
    conjunto_destruir(conj1);
    conjunto_destruir(conj2);
    conjunto_destruir(conj3);

    return 0;
}

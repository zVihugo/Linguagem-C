#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void imVetor(int vetor[TAM]) {
    // Auxiliar contador
    int cont;

    // Imprime o vetor
    for (cont = 0; cont < TAM; cont++) {
        printf("%d - ", vetor[cont]);
    }
    printf("\n");
}

void pilha_push(int pilha[TAM], int valor, int *topo) {
    if (*topo == TAM - 1) { // Pilha cheia
        printf("Pilha cheia\n");
    } else {
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

int main() {
    int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int top = -1; // topo do pilha

    imVetor(pilha);

    pilha_push(pilha, 5, &top);
    imVetor(pilha);

    return 0;
}

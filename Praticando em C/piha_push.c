#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void impVet(int vetor[TAM]) {
    int cont;
 re
    for (cont = 0; cont < TAM; cont++) { // Corrected the loop syntax
        printf("%d - ", vetor[cont]);
    }
    printf("\n"); // Added a newline after printing the array
}

void pilha_push(int pilha[TAM], int valor, int *topo) {
    if (*topo == TAM - 1) {
        printf("Pilha cheia\n");
    } else {
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

void pilha_pop(int pilha[TAM], int *topo) {
    if (*topo == -1) {
        printf("A pilha est� vazia\n"); // Added a newline
    } else {
        printf("O valor removido foi: %d\n", pilha[*topo]); // Added a newline
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }
}

int main() {
    int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int topo = -1;

    impVet(pilha); // Corrected the function name

    pilha_push(pilha, 5, &topo);
    impVet(pilha); // Corrected the function name
    pilha_pop(pilha, &topo);
    impVet(pilha);

    return 0;
}

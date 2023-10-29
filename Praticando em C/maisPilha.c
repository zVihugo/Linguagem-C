#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

void imprime_vetor(int vetor[TAM], int topo) {

    // Auxiliar contador
    int cont;

    printf("\n");

    // Imprime o vetor
    for (cont = 0; cont < TAM; cont++) {
        printf("%d - ", vetor[cont]);
    }

    printf("Topo: %d", topo);
}

// Caso a pilha esteja vazia
int pilha_vazia(int topo) {
    if (topo == -1) {
        return 1;
    } else {
        return 0;
    }
}

// Confere se a pilha está cheia
int pilha_cheia(int topo) {
    if (topo == TAM - 1) {
        return 1;
    } else {
        return 0;
    }
}

int pilha_tamanho(int topo) {
    return topo + 1;
}

// Retorna o último valor da pilha
int pilha_get(int pilha[TAM], int *topo) {
    if (pilha_vazia(*topo)) {
        printf("A pilha está vazia");
        return 0;
    } else {
        return pilha[*topo];
    }
}

// Adiciona um valor na pilha
void pilha_push(int pilha[TAM], int valor, int *topo) {

    // Caso não possa colocar mais valores
    if (pilha_cheia(*topo)) {
        printf("Pilha cheia!");
    } else {
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

// Remove um valor da pilha
void pilha_pop(int pilha[TAM], int *topo) {

    if (pilha_vazia(*topo)) {
        printf("A Pilha já está vazia");
    } else {
        printf("Valor Removido: %d", pilha[*topo]);
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }
}

// Cria uma pilha e limpa ela
void pilha_construtor(int pilha[TAM], int *topo) {

    // Coloca o topo negativo para indicar uma pilha vazia
    *topo = -1;

    // Auxiliar contador
    int cont;

    // Limpa o vetor
    for (cont = 0; cont < TAM; cont++) {
        pilha[cont] = 0;
    }
}

int main() {

    int pilha[TAM];
    int topo, valorRetirado; // Topo da pilha

    pilha_construtor(pilha, &topo);

    imprime_vetor(pilha, topo);

    pilha_push(pilha, 5, &topo);
    imprime_vetor(pilha, topo);

    printf("Último valor da pilha: %d", pilha_get(pilha, &topo));
    printf("Tamanho da Pilha: %d", pilha_tamanho(topo));

    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    imprime_vetor(pilha, topo);

    pilha_pop(pilha, &topo);
    imprime_vetor(pilha, topo);

    return 0;
}

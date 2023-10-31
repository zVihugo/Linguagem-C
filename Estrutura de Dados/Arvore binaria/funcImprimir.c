#include <stdio.h>
#include <stdlib.h>

//função para imprimir em ordem
void imprimir(NO *raiz){
	if(raiz != NULL){
		imprimir(raiz->esquerda);
		printf("%d", raiz->conteudo);
		imprimir(raiz->direita);
	}
}

int main(){
	
}

//Pos ordem começa da menor nó da esquerda, percorrendo as folhas para o sentido da direita, quando for null sobe e continua o processo

//Pre ordem desce, vira e sobe, mas nao imprimi o nó por primeiro, sempre por ultimo


//função para imprimir em ordem
void emOrdem(NO *raiz){
	if(raiz != NULL){
		imprimir(raiz->esquerda);
		printf("%d", raiz->conteudo);
		imprimir(raiz->direita);
	}
}

//função para imprimir em pré ordem
 void preOrdem(struct Node* node) {
    if (node == NULL)
        return;
    printf("%d ", raiz->conteudo);
    preOrdem(raiz->esquerda);
    preOrdem(raiz->direita);
}

//função para imprimir em pós ordem

void posOrdem(struct Node* node) {
    if (node == NULL)
        return;
    posOrdem(raiz->esquerda);
    posOrdem(raiz->direita);
    printf("%d ", raiz->conteudo);
}

//Lembre-se de maneira didática, para imprimimos uma arvore em pré ordem, sempre colocamos a bolinha a esquerta
//De maneira ordenada, colocamos a bolinha embaixo do NO
//Pós ordem, colocamos a bolinha do lado direito do NO

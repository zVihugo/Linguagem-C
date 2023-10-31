#include <stdio.h>
#include <stdlib.h>

//fun��o para imprimir em ordem
void imprimir(NO *raiz){
	if(raiz != NULL){
		imprimir(raiz->esquerda);
		printf("%d", raiz->conteudo);
		imprimir(raiz->direita);
	}
}

int main(){
	
}

//Pos ordem come�a da menor n� da esquerda, percorrendo as folhas para o sentido da direita, quando for null sobe e continua o processo

//Pre ordem desce, vira e sobe, mas nao imprimi o n� por primeiro, sempre por ultimo


//fun��o para imprimir em ordem
void emOrdem(NO *raiz){
	if(raiz != NULL){
		imprimir(raiz->esquerda);
		printf("%d", raiz->conteudo);
		imprimir(raiz->direita);
	}
}

//fun��o para imprimir em pr� ordem
 void preOrdem(struct Node* node) {
    if (node == NULL)
        return;
    printf("%d ", raiz->conteudo);
    preOrdem(raiz->esquerda);
    preOrdem(raiz->direita);
}

//fun��o para imprimir em p�s ordem

void posOrdem(struct Node* node) {
    if (node == NULL)
        return;
    posOrdem(raiz->esquerda);
    posOrdem(raiz->direita);
    printf("%d ", raiz->conteudo);
}

//Lembre-se de maneira did�tica, para imprimimos uma arvore em pr� ordem, sempre colocamos a bolinha a esquerta
//De maneira ordenada, colocamos a bolinha embaixo do NO
//P�s ordem, colocamos a bolinha do lado direito do NO

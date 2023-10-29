/*

A pilha é uma estrutura do tipo LIFO, aonde o primeiro elemento a ser inserido, é o ultimo elemento a ser retirado.
Cada elemento da estrutura, pode armazenar um ou vários dados e um ponteiro que aponta para o proximo elemento, permitindo o encadeamento, da estrutura Linear
Qualquer estrutura do tipo, possuio um ponteiro denominado TOPO, aonde todas as operações acontecem...
*/

//incluindo bibliotecas
#include <stdio.h>
#include <stdlib.h>
//Estrutura que representará cada elemento da PILHA

typedef struct Node{
	int dado;
	struct Node *prox;
}NO;

//Para o controle, teremos uma estrutura do tipo pilha, aonde teremos um ponteiro topo, que armazenará o endereço de memória do elemento que estiver no topo da pilha
//E também teremos uma variavel do tipo inteira, que irá servir para controlar o tamanho da pilha
typedef struct PILHA{
	NO *topo;
	int tam;
}pilha;

//Criando uma pilha e alocando a memória dinamicamente

void criarPilha(pilha *p){
	if(p != NULL){
		p->topo = NULL; //Iniciando a pilha vazia, portando o topo é nulo
		p->tam = 0;
	}
}

//Inserindo um elemento na pilha

void push(pilha *p, int num){
	//Para cada inserção, temos que alocar dinamicamente um espaço para um novo elemento
	NO *novo = (NO *)malloc(sizeof(NO));
	
	//Atribuindo o valor recebido para a primeira posição
	novo->dado = num;
	
	//Como o número inserido é o novo topo, o mesmo vai apontar para o topo atual, que será o segundo elemento da pilha
	novo->prox = p->topo;
	
	//aponta para o endereço de novo
	p->topo = novo;
	printf("\nElemento inserido na pilha: %d \n", num);
	p->tam++;
}

//Função para a consulta da pilha
void consultarPilha(pilha *p){
	NO *aux = (NO *)malloc(sizeof(NO));
	if(p->topo ==NULL){
		printf("\nPilha vazia!\n");
	}else{
		aux = p->topo;
		do{
			printf("%d ", aux->dado);
			aux =  aux->prox;
		}while(aux != NULL);
		printf("\nTamanho da pilha: %d ", p->tam);
	}
}	

//função para removermos um elemento dentro de uma pilha

void pop(pilha *p){
	NO *aux = (NO *)malloc(sizeof(NO));
	if(p->topo == NULL){
		printf("\nPilha vazia!\n");
	}else{
		   aux = p->topo;
		   printf("\nElemento removido :%d ", aux->dado);
		   p->topo = p->topo->prox;
		   free(aux);
		   p->tam--;	
	}	
}

//Função para limpar completamente a pilha
void limpar(pilha *p){
	NO *aux = (NO *)malloc(sizeof(NO));
	if(p->topo == NULL){
		printf("Pilha está vazia!");
	}else{
		aux = p->topo;
		do{
			p->topo = p->topo->prox;
			free(aux);
			aux = p->topo;
		}while(aux != NULL);
		printf("Pilha vazia!");
	}
}

//função main
int main(){
	//declarando minha pilha
	pilha p;
	
	//iniciando minha pilha
	criarPilha(&p);
	
	//atribuindo valores a pilha
	push(&p, 8);
	
	//consultando minha pilha
	consultarPilha(&p);
	
	//removendo valores da pilha
	pop(&p);
	return 0;
	
}
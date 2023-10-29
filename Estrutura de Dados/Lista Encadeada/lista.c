//inclusao de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//definindo minha struct Node para lista
typedef struct Node{
	int data;
	struct Node* next;
}NO;

//funcao para imprimir minha lista 
void printLista(NO* n){
	while(n != NULL){
		printf("%d", n->data);
		n = n->next;
	}
}

int main(){
	//definindo meus Nos
	
	NO* primeiro = NULL;
	NO* segundo = NULL;
	NO* terceiro = NULL;
	
	//Alocando memória dinamicamente
	primeiro =  (NO*)malloc(sizeof(NO));
	segundo =  (NO*)malloc(sizeof(NO));
	terceiro =  (NO*)malloc(sizeof(NO));
	
	//Atribuindo valores
	
	primeiro->data = 1;
	primeiro->next = segundo;
	
	segundo->data = 2;
	segundo->next = terceiro;
	
	terceiro->data = 3;
	terceiro->next = NULL;
	
	//imprimindo minha lista
	
	printLista(primeiro);
	return 0;
}
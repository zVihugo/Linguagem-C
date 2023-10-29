/*
A Fila é uma estrutura do tipo FIFO, aonde o primeiro a entrar é o primeiro a sair. Cada elemento da estrutura
pode armazenar varios dados e um ponteiro que aponta para o próximo elemento, o que permite o encademaneto e m
antêm uma estrutura linear

A estrutura apresenta um ponteiro INICIO aonde todas operações de remoção acontecem, e um ponteiro chamado FIM,
aonde as inserções acontecem

vamos lá para os primeiros passos:

*/

//Incluindo bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Definindo a estrutura de cada elemento da pilha

typedef struct Node{
	   int num;
	   struct Node *prox;	
}NO;

//Para o controle, teremos uma estrutura do tipo Lista, contendo dois poteiros
typedef struct Fila{
	 int tam;
	 NO *inicio; //Aponta para o elemento do inicio da fila
	 NO *fim; //Aponta para o elemento do fim da fila
}fila;

//Agora iremos criar uma função para criar uma fila, isso alocará dinamicamente o espaço necessário para armazenar seus ponteiros
//(Inicio e Fim), inicializando ambos com NULL, indicando que a fila estará inicialmente vazia

void criarFila(fila *f){
	f->tam = 0;
	f->inicio = NULL;
	f->fim =  NULL;
}

//Aqui temos a função que irá inserir um elemento na fila
void inserir(fila *f, int dado){
	
	//Note que ao inserir, temos que alocar espaço para o novo elemento
	NO *novo =  (NO *)malloc(sizeof(NO));
	
	//Atribuindo a primeiro posição o elemento passado como parametro, e definindo a posição sequinte como NULL
	novo->num = dado;
	novo->prox = NULL;
	
	//Caso a fila esteja vazia, o elemento inserido será o primeiro e o ultimo
	if(f->inicio == NULL){
		f->inicio = novo;
		f->fim = novo;
	}
	else{
		//Se não for nula, o proximo elemento será sempre inserido no final da fila
		f->fim->prox = novo;
		f->fim = novo;
	}
	printf("\nO dado %d, foi inserido com sucesso!\n", dado);
	f->tam++;
}

//Para consultar a fila, podemos também criar uma função para isto

void consultar(fila *f){
	//Ponteiro auxiliar para algumas funções
	NO *aux;
	if(f->inicio == NULL){
		printf("FILA VAZIA!");
	}else{
		   aux = f->inicio;	
	}do{
		printf("%d ", aux->num);
		aux = aux->prox;
	}while(aux != NULL);
	printf("\nTamanho: %d\n", f->tam);
}

//Para removermos um elemento da fila (primeiro elemento), podemos utilizar esta função:

void remover(fila *f){
	//Ponteiro auxiliar para algumas funções
	NO *aux;
	if(f->inicio == NULL){
		printf("Fila vazia!");
	}else{
		aux = f->inicio;
		printf("\nElemento removido: %d\n", f->inicio->num);
		f->inicio = f->inicio->prox;
		free(aux);
		f->tam--;
	}
}

//Função para limpar totalmente a fila

void limparFila(fila *f){
	//Ponteiro auxiliar para algumas funções
	NO *aux;
	   if(f->inicio == NULL){
		   printf("Fila vazia!");
	   }
	   else{
		   aux = f->inicio;
		   do{
			   f->inicio = f->inicio->prox;
			   free(aux);
			   aux = f->inicio;
		   }while(aux != NULL);
		   printf("\nFila vazia!\n");
	   }
}

//Repare que na função main, temos que definir um ponteiro do tipo Fila, aonde o mesmo recebe o endereço do espaço alocado pela função
//criarFila
int main(){
	//Declarando e iniciando
	fila f;
	criarFila(&f);
	
	//Adicionando
	inserir(&f, 15);
	inserir(&f, 16);
	inserir(&f, 17);
	inserir(&f, 18);
	inserir(&f, 19);
	
	//Consultando
	consultar(&f);
	
	//removendo
	remover(&f);
	
	//Consultando novamente
	consultar(&f);
	
	//limpando a FILA
	limparFila(&f);
	
	//consultando
	consultar(&f);
	
	return 0;
}
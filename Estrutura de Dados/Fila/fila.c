/*
A Fila � uma estrutura do tipo FIFO, aonde o primeiro a entrar � o primeiro a sair. Cada elemento da estrutura
pode armazenar varios dados e um ponteiro que aponta para o pr�ximo elemento, o que permite o encademaneto e m
ant�m uma estrutura linear

A estrutura apresenta um ponteiro INICIO aonde todas opera��es de remo��o acontecem, e um ponteiro chamado FIM,
aonde as inser��es acontecem

vamos l� para os primeiros passos:

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

//Agora iremos criar uma fun��o para criar uma fila, isso alocar� dinamicamente o espa�o necess�rio para armazenar seus ponteiros
//(Inicio e Fim), inicializando ambos com NULL, indicando que a fila estar� inicialmente vazia

void criarFila(fila *f){
	f->tam = 0;
	f->inicio = NULL;
	f->fim =  NULL;
}

//Aqui temos a fun��o que ir� inserir um elemento na fila
void inserir(fila *f, int dado){
	
	//Note que ao inserir, temos que alocar espa�o para o novo elemento
	NO *novo =  (NO *)malloc(sizeof(NO));
	
	//Atribuindo a primeiro posi��o o elemento passado como parametro, e definindo a posi��o sequinte como NULL
	novo->num = dado;
	novo->prox = NULL;
	
	//Caso a fila esteja vazia, o elemento inserido ser� o primeiro e o ultimo
	if(f->inicio == NULL){
		f->inicio = novo;
		f->fim = novo;
	}
	else{
		//Se n�o for nula, o proximo elemento ser� sempre inserido no final da fila
		f->fim->prox = novo;
		f->fim = novo;
	}
	printf("\nO dado %d, foi inserido com sucesso!\n", dado);
	f->tam++;
}

//Para consultar a fila, podemos tamb�m criar uma fun��o para isto

void consultar(fila *f){
	//Ponteiro auxiliar para algumas fun��es
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

//Para removermos um elemento da fila (primeiro elemento), podemos utilizar esta fun��o:

void remover(fila *f){
	//Ponteiro auxiliar para algumas fun��es
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

//Fun��o para limpar totalmente a fila

void limparFila(fila *f){
	//Ponteiro auxiliar para algumas fun��es
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

//Repare que na fun��o main, temos que definir um ponteiro do tipo Fila, aonde o mesmo recebe o endere�o do espa�o alocado pela fun��o
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
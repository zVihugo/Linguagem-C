#include <stdio.h>
#include <stdlib.h>

//Aloca um vetor do tamanho pedido
int* alocaVetor (int tam ){

    //� criado um ponteiro
    int *v;

    //A mem�ria � alocada e o ponteiro recebe o endere�o de mem�ria dele
    v = (int *) malloc ( tam * sizeof (int) ) ;

    //Esse ponteiro � retornado
    return v;
}

int main(){

    //Ponteiro que vai apontar para o vetor criado
    int *vetor , tam ,i;

    //Lendo o tamanho do vetor
    printf("Digite um tamanho");
    scanf ( "%d", &tam ) ;

    //Vetor vai receber um endere�o de mem�ria com o vetor que foi alocado
    //ponteiro = ENDERECO_DE_MEMORIA ou PONTEIRO
    //*ponteiro = VALOR
    vetor = alocaVetor(tam) ;

    //Colocando alguns valores no vetor
    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;

    //Imprimindo o vetor na tela
    for(i=0;i<tam;i++){
        printf("%d", vetor[i]);
    }

    //Libera a mem�ria ap�s usar o vetor
    free ( vetor ) ;

    return 0;


    /*
      float *v; //definindo o ponteiro v
  int i, num_componentes;

  printf("Informe o numero de componentes do vetor\n");
  scanf("%d", &num_componentes);

  /* ------------- Alocando dinamicamente o espa�o necess�rio -------------

  1 - Calcular o n�mero de bytes necess�rios
  primeiramente multiplicamos o n�mero de componentes do vetor pela
  quantidade de bytes que � dada pelo comando sizeof,
  portanto temos:
  num_componentes * sizeof(float)

  2 - Reservar a quantidade de mem�ria
  usamos malloc para reservar essa quantidade de mem�ria,
  ent�o temos:
  malloc(num_componentes * sizeof(float))

  3 - Converter o ponteiro para o tipo de dados desejado
  como a fun��o malloc retorna um ponteiro do tipo void,
  precisamos converter esse ponteiro para o tipo da nossa vari�vel, no caso float,
  por isso usamos o comando de convers�o explicita:
  (float *)

  4 - juntando tudo e atribuindo em v temos o comando abaixo: */

  v = (float *) malloc(num_componentes * sizeof(float));

  //Armazenando os dados em um vetor
  for (i = 0; i < num_componentes; i++)
  {
    printf("\nDigite o valor para a posicao %d do vetor: ", i+1);
    scanf("%f",&v[i]);
  }

  // ------ Percorrendo o vetor e imprimindo os valores ----------
  printf("\n*********** Valores do vetor dinamico ************\n\n");

  for (i = 0;i < num_componentes; i++)
  {
    printf("%.2f\n",v[i]);
  }

  //liberando o espa�o de mem�ria alocado
  free(v);

  getch();
  return 0;

}

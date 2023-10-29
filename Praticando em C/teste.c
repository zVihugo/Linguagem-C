#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"");
    /*
	//Permite usar acentos

    //Imprime Olá
    printf("Olá \n");

    //Lendo valor inteiro
    int a = 50;
    printf("O valor de a é = %d \n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);

    //Lendo valor quebrado
    int b = 5.5;
    printf("O valor de b é = %d \n", b);
    scanf("%f", &b);
    printf("O valor de a mudou para %f", b);

    //Lendo letra
    char letra = 't';
    printf("O valor de c é = %d \n", letra);
    fflush(stdin);
    scanf("%c", &letra);
    printf("O valor de c mudou para %c", letra);


    setlocale(LC_ALL,"");

    float a, b;

    printf("Digite a primeira nota: ");
    scanf("%f", &a);

    printf("Digite a segunda nota: ");
    scanf("%f", &b);

    float media = (a+b)/2;
    printf("A média entra as notas é: %.2f ", media);


    setlocale(LC_ALL,"");

    float n1, n2, absolut;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    absolut = abs(n1-n2);

    printf("O valor absoluto da diferença das notas é: %.2f", absolut);


    setlocale(LC_ALL,"");

    int a,b,c,resultado;

    printf("Digite os três números em sequência: ");
    scanf("%d %d %d", &a,&b,&c);
    resultado = a*b*c;
    printf("O resultado é: %d",resultado);
    */
    /*
    setlocale(LC_ALL, "");

    float n1,n2,n3,media;

    printf("Digite as três notas: ");
    scanf("%f %f %f", &n1,&n2,&n3);
    media = ((n1+n2+n3)/3);
    if(media > 7){
        printf("Você foi aprovado!!");
    }
    else{
        printf("Você foi reprovado!!");
    }

    setlocale(LC_ALL, "");

    int n1,n2,n3;

    scanf("%d %d %d", &n1,&n2,&n3);
    if(n1 == n2 && n2 == n3){
        printf("Ele forma um triangulo equilátero");
    }

    setlocale(LC_ALL, "");

    int a,b, aux, res;

    printf("Digite os dois valores: ");
    scanf("%d %d", &a,&b);

    printf("Digite a opção desejada:"
           "1 - soma\n"
           "2 - subtração\n"
           "3 - Divisão\n"
           "4 - Multiplicação");
    scanf("%d", &aux);

    switch(aux){
        case 1:
            res = a+b;
            break;
        case 2:
            res = a-b;
            break;
        case 3:
            res = a/b;
            break;
        case 4:
            res = a*b;
            break;
        default:
            break;
    }
    printf("O resultado é: %d", res);

   //Responsável por alimentar o rand de forma diferente
   srand((unsigned)time(NULL));

   //Variável que recebe o resto da divisão do número por 3 (aleatorio entre 0 e 2)
   int aleatorio = rand() % 3;

   //Variável que recebe o resto da divisão do número por 5 (aleatorio entre 1 e 5)
   int aleatorioSegundo = (rand() % 5) + 1;

   //Imprime o valor
   printf("%d", aleatorioSegundo);

   //Pausa o programa após executar
   system("pause");


    //Definindo Variáveis
    int opcao;

    //Confere e valida a opcao
    while(opcao < 1 || opcao > 3){

         //Interface de Menu
        printf("Escolha uma opcao:");
        printf("\n1-Opcao 1");
        printf("\n2-Opcao 2");
        printf("\n3-Opcao 3\n");

        //Lendo a opcao
        scanf("%d", &opcao);

        //Resultado de acordo com a opcao escolhida
        switch(opcao){
             case 1:
                printf("\nOpcao 1 foi escolhida");
                break;
             case 2:
                printf("\nOpcao 2 foi escolhida");
                break;
             case 3:
                printf("\nOpcao 3 foi escolhida");
                break;
            default:
                printf("\nOpcao Invalida");
                break;
        }

    }

    //Pausa o programa após executar
    system("pause");

    //Para usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que imprima os números de 10 até 0
    //de forma regressiva. (usando While, Do While ou For)
    //While
    int i = 10;
    while(i >= 0){
        printf("%d \n", i);
        i--;
    }

    //Do While
    i = 10;
    do{
        printf("%d \n", i);
        i--;
    }while(i >= 0);

    //For
    for(i = 10; i >= 0; i--){
        printf("%d \n", i);
    }

    int aux = 10;

    while(aux <= 20){
        if(aux % 2 == 0){
            printf("%d\n", aux);
        }
        aux++;
    }
    do{
        if(aux % 2 == 0){
            printf("%d\n", aux);
        }
        aux++;
    }while(aux <= 20);
    for(int cont = 10; cont <=20; cont++){
        if(cont % 2 == 0){
            printf("%d\n", cont);
        }
    }
    setlocale(LC_ALL, "");

    int i, valor, resto, aux = 0;

    printf("Digite um número, para saber se ele é primo ou não: ");
    scanf("%d", &valor);

    for(i = 1; i <= valor; i++){
        resto = valor%i;
        if(resto == 0){
            aux++;
        }
        printf("%d/%d tem o resto = %d \n", valor, i,resto);
    }
    if (aux == 2){
        printf("%d é primo!", valor);
    }
    else{
        printf("não é primo!");
    }
    //Imprime na tela
    int vetor[TAM],cont;

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Adicionando 1 para cada posição
    for(cont = 0; cont < TAM; cont++){
        vetor[cont] =  vetor[cont] + 1;
    }

    //Exeibindo os valores do vetor
    printf("\nPosicao 0: %d", vetor[0] );
    printf("\nPosicao 1: %d", vetor[1] );
    printf("\nPosicao 2: %d", vetor[2] );

    //Imprimindo vetor em um laço de repetição
    for(cont = 0; cont < TAM; cont++){
        printf("\nPosicao %d : %d", cont, vetor[cont] );
    }

    //Lendo 3 valores para o vetor
    for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }

    //Imprimindo vetor em um laço de repetição
    for(cont = 0; cont < TAM; cont++){
        printf("\nPosicao %d : %d", cont, vetor[cont] );
    }

    //Pausa o programa após executar
    system("pause");

    setlocale(LC_ALL, "");
    float vet[tam], aux = 0;

    for(int cont = 0; cont < tam; cont++){
        printf("Vetor[%d]: ", cont);
        scanf("%f", &vet[cont]);
        aux += vet[cont];
    }
    printf("A média é: %.2f", aux/tam);

     //Variáveis
    char palavra[10];

    //Instrução
    printf("Digite uma palavra");

    //Limpa o Buffer
    setbuf(stdin, 0);

    //Lê a String
    fgets(palavra, 255, stdin);

    //Limpa as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //Imprime na tela
    printf("%s", palavra);

    //Pausa o programa após executar
    system("pause");

    #include <stdio.h>
    #include <stdlib.h>
    #include <string>
    #include <iostream>

    using namespace std;

    //Função principal do programa
    int main(){

        //Definindo uma String
        string palavra;

        //Imrpimindo na tela
        cout << "Digite uma palavra";

        //Lendo uma string
        cin >> palavra;

        //Imprimindo uma variável
        cout << "\nA palavra eh:" << palavra;

        //Pausa o programa após executar
        system("pause");

        return 0;

    }

    int matriz[2][2], i, j;

    //Passando valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    //Imprimindo valores na tela
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            //cout << "\ni = " << i << " , j = " << j;
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    //Lendo valores para a matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
           //scanf("%d", &matriz[i][j]);
           cin >> matriz[i][j];
        }
    }

    //Imprimindo valores na tela
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            //cout << "\ni = " << i << " , j = " << j;
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    //Pausa o programa após executar
    system("pause");

    int minhamatriz[2][2];

    // lendo valores
    for (int i = 0; i < 2; i++) {
        for (int l = 0; l < 2; l++) {
            printf("Digite um valor para [%d][%d]: ", i, l);
            scanf("%d", &minhamatriz[i][l]);
        }
    }

    // imprimindo ao contrário
    for (int i = 1; i >= 0; i--) {
        for (int l = 1; l >= 0; l--) {
            printf("Matriz[%d][%d]: %d\n", i, l, minhamatriz[i][l]);
        }
    }

    //Preencha uma matriz 2x2 lendo valores do usuário e
    //depois troque os valores entre a primeira e a segunda linha.
    int minhaMatriz[2][2], aux1,aux2, i , j;

    //Lendo valores para matriz
    printf("Digite um valor para [0][0]");
    scanf("%d", &minhaMatriz[0][0]);
    printf("Digite um valor para [0][1]");
    scanf("%d", &minhaMatriz[0][1]);
    printf("Digite um valor para [1][0]");
    scanf("%d", &minhaMatriz[1][0]);
    printf("Digite um valor para [1][1]");
    scanf("%d", &minhaMatriz[1][1]);

    //Auxiliares
    aux1 = minhaMatriz[0][0];
    aux2 = minhaMatriz[0][1];

    //Invertendo valores usando auxiliares
    minhaMatriz[0][0] = minhaMatriz[1][0];
    minhaMatriz[0][1] = minhaMatriz[1][1];
    minhaMatriz[1][0] = aux1;
    minhaMatriz[1][1] = aux2;

    //Imprimindo nova matriz
    printf("\n%d %d",minhaMatriz[0][0],minhaMatriz[0][1]);
    printf("\n%d %d",minhaMatriz[1][0],minhaMatriz[1][1]);

    */


}

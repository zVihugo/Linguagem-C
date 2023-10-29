#include <stdio.h>
#include <stdlib.h>

int retornaComMaisDez(int numero){
    return numero + 10;
}

void aumentaDez(int *numero){
    *numero = *numero + 10;
}   

int main(){

    //Definindo Vari�veis
    int a = 5;

    //Mostrando o valor
    printf("%d \n", a);

    //Aumenta 10
    a = retornaComMaisDez(a);

    //Mostrando o valor
    printf("%d \n", a);

    //Fun��o que aumenta 10 diretamente
    aumentaDez(&a);

    //Mostrando o valor
    printf("%d \n", a);

    //Retorno da Fun��o
    return 0;
}

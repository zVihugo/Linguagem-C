#include <stdio.h>
#include <stdlib.h>

char retornaLetra(){
    return 'x';
}

int main(){

    //def vari

    char letra;

    //Recebendo valor

    letra = retornaLetra();

    printf("%c", letra);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int mediarec(int *v, int n, int soma, int *aux) {  //Utilizando ponteiro, passo aponto o conteudo para aux, que recebe o endereço de memória de L, que lista todos os elementos.
    if (n == 0) {
        return soma / *aux;
    }
    return mediarec(v, n - 1, soma + v[n - 1], aux);
}

int maiormedia(int *v, int i, int cont, int media, int aux){
    if(i == aux){
        return cont;
    }
    if(v[i] > media){
        cont++;
    }
    return maiormedia(v, i + 1 , cont, media, aux);
}

int main() {
    int aux = 0, i, l = 0, *v = NULL;
    printf("Digite um valor: ");


    while (1) {
       scanf("%d", &i);
       if (i == 0) {
            break;
       }
       v = (int *)realloc(v, (l + 1) * sizeof(int));
       v[l] = i;
       l++;
       aux += i;
    }
    printf("%d", aux);
    int media = 0, cont = 0;
    media = mediarec(v, l, 0, &l);
    printf("\nA media eh: %d", media);

    cont  = maiormedia(v, 0, 0, media, l);
    printf("\nMaiores que a media: %d", cont);
    free(v);
    return 0;
}

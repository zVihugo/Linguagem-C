#include <stdio.h>
#include <iostream>
#include <locale.h>
//Aluno: Victor Moreira RA: 2503581

typedef struct{
    float base, altura;
}triangulo;

void imTriangulo(triangulo p){
    printf("Base: %.2f\n", p.base);
    printf("Altura: %.2f\n", p.altura);
}

float area(float base, float altura){
    float areaT = (base*altura)/2;
    return areaT;
}

void areaB(triangulo t1){
    float areaB = (t1.base * t1.altura) / 2;
    printf("A area do triangulo é: %.2f\n", areaB);
}

void trocarValores(triangulo *t1, triangulo *t2){
    triangulo aux;
    aux = *t1;
    *t1 = *t2;
    *t2 = aux;

}
int main(){
    setlocale(LC_ALL, "");
    triangulo t1, t2;

    t1.base = 5.0;
    t2.base = 9.0;
    t1.altura = 2.0;
    t2.altura = 3.0;

    float calculoAt = area(t1.altura, t1.base);
    printf("O calculo da area usando a função area: %.2f\n", calculoAt);

    printf("-----AREA DE T1-----\n");
    areaB(t1);
    printf("-----AREA DE T2-----\n");
    areaB(t2);
    printf("-----VALORES NORMAIS-----\n");
    imTriangulo(t1);
    imTriangulo(t2);
    printf("-----VALORES INVERTIDOS-----\n");
    trocarValores(&t1, &t2);
    imTriangulo(t1);
    imTriangulo(t2);
    return 0;
}


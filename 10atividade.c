#include<stdio.h>
#define TAM 2

main(){
    float notas[6], media, soma;

    for(int i = 0; i < TAM; i++){
        printf("Digite as nostas:");
        sacanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma/TAM;

    printf("Media da turma: %.2f", media);



}
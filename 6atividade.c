#include<stdio.h>

main(){
    int vetor[10], maior, menor;

    for(int i = 0; i < 10; i++){
        printf("\nDigite os valores");
        scanf("%d", &vetor[i]);
    

    }
    maior = vetor[0];
    menor = vetor[0];

 for(int i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];

        }
        if(vetor[i] < menor){
            menor = vetor[i];

        }

    }
      printf("\nMaior valor: %d. Menor valor: %d", maior, menor);
}
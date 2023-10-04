#include<stdio.h>

main(){
    int vetor[5], maior, menor, pmaior, pmenor;

    for(int i = 0; i < 5; i++){
        printf("\nDigite os valores");
        scanf("%d", &vetor[i]);
    

    }
    

 for(int i = 0; i < 5; i++){
        if(maior = vetor[i]){
            pmaior = i;

        }
        if(vetor[i] < menor){
            menor = vetor[i];
            pmenor = i;

        }

    }
      printf("\nMaior valor: %d. Menor valor: %d", maior, menor);
}
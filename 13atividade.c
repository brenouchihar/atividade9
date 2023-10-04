#include<stdio.h>

main(){

    int valor[5], maior, menor, pmaior, pmenor;

    for(int i = 0; i < 5; i++){
        printf("\nDigite um numero:");
        scanf("\n%d", &valor[i]);

    }
    maior = valor[0];
    menor = valor[0];

    for(int i = 0; i < 5; i++){
        if(valor[i] > maior){
            maior = valor[i];
            pmaior = i;
            }

            if(valor [i] < menor){
                menor = valor[i];
                pmenor = i;
                }

    }
    printf("Maior: %d na posicao %d. Menor %d na posicao: %d", maior, pmaior, menor, pmenor);

}

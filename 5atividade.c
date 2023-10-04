#include<stdio.h>

main(){
    int vetor[10], pares=0;

    for(int i = 0; i < 10; i++){
        printf("\nDigite um valor");
        scanf("%d",&vetor[i]);
        
        if(vetor[i] % 2 == 0){
            printf("\nO numero digitado e par %d", vetor[i]);
             pares++;
        }else{
            printf("\nOnumero digitadoe impar %d", vetor[i]);
        }
        
        }

      printf("\nTotal de pares: %d", pares);

}
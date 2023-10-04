#include<stdio.h>

main(){

    int num[6] = {5, 10, 15, 20, 25, 30}, soma = 0;


    for(int i = 0; i < 6; i++){
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }
    
    for(int i = 0; i < 6; i++){
        soma += num[i];
        printf("\n%d %d", i, num[i]);
    }
    printf("\n%d", soma);
}
#include<stdio.h>

main(){
    int vetorA[10];
    int vetorB[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um numero:");
        scanf("\n%d", &vetorA[i]);
        }

        for(int i = 0; i < 10; i++){
        vetorB[i] = vetorA[i] * vetorA[i];
        

        printf("\n%d %d", vetorA[i], vetorB[i]);
        
        }




}

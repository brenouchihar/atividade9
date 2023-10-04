#include<stdio.h>
main(){
    int num[6];

    for(int i = 0; i < 6; i++){
        printf("Digite um numero:");
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 6; i++){
        printf("\n%d %d", i, num[i]);

    }
}
#include<stdio.h>

main(){
    int numero [5] = {2, 3, 4, 5, 6};

    printf("\n%d", numero[0]);
    printf("\n%d", numero[1]);
    printf("\n%d", numero[2]);
    printf("\n%d", numero[3]);
    printf("\n%d", numero[4]);

    numero[4] = 100;
    printf("\n%d", numero[0]);
    printf("\n%d", numero[1]);
    printf("\n%d", numero[2]);
    printf("\n%d", numero[3]);
    printf("\n%d", numero[4]);


   

}
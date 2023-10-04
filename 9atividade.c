#include<stdio.h>

main(){
    int valores[6], num;

    for(int i = 0; i <6; i++){
        
        do{
           printf("\nDigite um numero par");
           scanf("%d", &num);
           if(num % 2 == 0){
            valores[i] = num;
            }else{
                printf("\nErro. Digite um numero par ");
            }

        }while(num % 2 != 0);
    }
    for(int i = 5; i >=0; i--){
        printf("\n%d", valores[i]);

    }

}
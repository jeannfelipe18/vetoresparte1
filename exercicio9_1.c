#include<stdio.h>

main(){

    int A[6] = {1,0,5,-2,-5,7}, soma;

   /* soma = A[0] + A[1] + A[5];

    printf("Soma: %d", soma);

    A[4] = 100;

    for(int i = 0; i<6; i++){ 
        printf("\n A: %d", A[i]);
    }*/

    //outra solucao
    for(int i = 0; i<6; i++){ 
        if(i == 0 || i == 1 || i == 5){
            soma += A[i];
        }
        if(i == 4){
            A[i] = 100;
        }
        printf("\n A: %d", A[i]);
    }
    printf("\nSoma: %d", soma);
}
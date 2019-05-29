#include <stdio.h>
 
/*
Escreva um programa que leia dois valores X e Y. 
A seguir, mostre uma sequência de 1 até Y, passando para a próxima linha a cada X números.
*/

int main() {
 
    int x, y, i = 0;
    
    scanf("%d %d", &x, &y);
    
    for(i = 1; i < y; i++){
        if(i % x == 0){
            printf("%d\n", i);
        }else{
            printf("%d ", i);
        }
    }

    printf("%d\n", i);
    
    
 
    return 0;
}

#include <stdio.h>
 
int main() {
 
    float nota, soma = 0;
    int sair = 1, i = 0;

    do{

        scanf("%f", &nota);

        if(!(nota >= 0 && nota <= 10)){
            printf("nota invalida\n");
        }else{
            soma += nota;
            i++;

            if(i == 2){
                printf("media = %.2f\n", soma / 2);

                while(1){
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &sair);

                    if(sair == 1){
                        soma = 0;
                        i = 0;
                        break;
                    }else if (sair == 2){
                        break;
                    }
                }
            }
        }
    }while(i < 2 && sair == 1);
 
    return 0;
}

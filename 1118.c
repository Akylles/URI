#include <stdio.h>
 
/*

Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. Calcule e imprima a média semestral. O programa só deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.

No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). Se for informado o código 1 deve ser repetida a execução de todo o programa para permitir um novo cálculo, caso contrário o programa deve ser encerrado.

*/

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

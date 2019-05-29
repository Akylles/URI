#include <stdio.h>

int main() {
 
    int x, z, i, contador = 1;

    scanf("%d", &x);
    scanf("%d", &z);

    while(z <= x){
        scanf("%d", &z);
    }

    for(i = x + 1; i < z; i++){
        x += i;
        contador++;

        if(x > z){
            break;
        }

    }

    printf("%d\n", contador);
 
    return 0;
}

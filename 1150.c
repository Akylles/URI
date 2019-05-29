#include <stdio.h>

int main() {
 
    int x, z;

    scanf("%d", &x);
    scanf("%d", &z);

    while(z <= x){
        scanf("%d", &z);
    }

    int i, contador = 1;

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

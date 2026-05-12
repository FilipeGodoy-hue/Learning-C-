#include <stdio.h>
#include <string.h>

int main(){

    int array[10];
    int pares = 0;
    int impares = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite um numero: \n");
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0){
            pares += 1;
        }
        else{
            impares += 1;
        }
    }
    impares = 10 - pares;
    
    printf("existem %d pares\n", pares);
    printf("existem %d impares\n", impares);
    return 0;
}
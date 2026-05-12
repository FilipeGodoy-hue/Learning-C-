#include <stdio.h>
#include <string.h>

int main(){

    int array[8];
    int numero_maior = 0;
    int numero_menor = 0;

    for(int i = 0; i < 8; i++){
        printf("Digite um numero: \n");
        scanf("%d", &array[i]);
        if(i == 0){
            numero_maior = array[i];
            numero_menor = array[i];
        } else {
            if(array[i] > numero_maior){
                numero_maior = array[i];
            }
            if(array[i] < numero_menor){
                numero_menor = array[i];
            }
        }
    }
    printf("O numero maior e: %d\n", numero_maior);
    printf("O numero menor e: %d\n", numero_menor);
    return 0;
}
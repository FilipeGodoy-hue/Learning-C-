#include <stdio.h>
#include <string.h>

int main(){

    int array[5];
    float sum = 0;

    for(int i = 0; i< 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &array[i]);
        sum += array[i];
    }

printf("A soma dos numeros digitados e: %.2f\n", sum);


    return 0;
}
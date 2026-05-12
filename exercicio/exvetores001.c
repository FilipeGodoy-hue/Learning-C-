#include <stdio.h>
#include <string.h>

int main (){

    int lista[10];
    int sum = 0;

    for(int i = 0; i  <10; i++){
        printf("Digite a nota do aluno: \n");
        scanf("%d", &lista[i]);
        sum += lista[i];
    }
    printf("A media das notas dos alunos e: %.2f\n", (float)sum/10);
    


    return 0;
}
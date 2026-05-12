#include <stdio.h>
#include <string.h>

int main(){

    int mat[4][4];
    int sum0 = 0;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum0C = 0;
    int sum1C = 0;
    int sum2C = 0;
    int sum3C = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o elemento: \n");
            scanf("%d", &mat[i][j]);
        }
    }
    for(int x = 0; x < 4; x++){
        sum0+= mat[0][x];
        sum1+= mat[1][x];
        sum2+= mat[2][x];
        sum3+= mat[3][x];
    }
    for(int x = 0; x < 4; x++){
        sum0C+= mat[x][0];
        sum1C+= mat[x][1];
        sum2C+= mat[x][2];
        sum3C+= mat[x][3];
    }


    printf("A soma da linha 0 vale: %d\n", sum0);
    printf("A soma da linha 1 vale: %d\n", sum1);  
    printf("A soma da linha 2 vale: %d\n", sum2);
    printf("A soma da linha 3 vale: %d\n", sum3);
    printf("A soma da coluna 0 vale: %d\n", sum0C);
    printf("A soma da coluna 1 vale: %d\n", sum1C);
    printf("A soma da coluna 2 vale: %d\n", sum2C);
    printf("A soma da coluna 3 vale: %d\n", sum3C);

    return 0;
}
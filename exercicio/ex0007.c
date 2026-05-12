#include <stdio.h>

int main(){

    int mat[3][3];
    int mat0[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um numero: \n");
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            mat0[i][j] = mat[j][i];
        }
    }
    printf("a matriz transoposta vale: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", mat0[i][j]);
        }
        printf("\n");
    }

    return 0;
}
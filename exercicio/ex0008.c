#include <stdio.h>
#include <string.h>

#define MAX 50

struct Cadastro{

    char nome[MAX];
    int idade;
    char nacionalidade[MAX];
    char sexo;
};

typedef struct Cadastro Cadastro;

int main(){

    Cadastro pessoa1;
    int escolha;

    printf("\n---Bem Vindo ao Cadastro de Pessoas!---\n");


    printf("Voce deseja realizar o cadastro? (0-nao/1-sim): \n");
    scanf("%d", &escolha);
    getchar();  // Limpa o newline do buffer

    if(escolha == 0){
        printf("Sessao encerrada! \n");
    }
    else{
        printf("Perfeito! Vamos comecar o cadastro! \n");

        printf("Digite seu nome completo: \n");
        fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);
        pessoa1.nome[strcspn(pessoa1.nome, "\n")] = '\0';

        printf("Digite sua idade: \n");
        scanf("%d", &pessoa1.idade);
        getchar(); //Coloque isso aqui para limpar o buffer do teclado, para evitar que o fgets seja pulado.

        printf("Digite sua nacionalidade: \n");
        fgets(pessoa1.nacionalidade, sizeof(pessoa1.nacionalidade), stdin);
        pessoa1.nacionalidade[strcspn(pessoa1.nacionalidade, "\n")] = '\0';
        
        printf("Digite seu sexo (M/F): \n");
        scanf(" %c", &pessoa1.sexo);
    
        printf("\n---Cadastro Realizado com Sucesso!---\n");
        printf("Nome: %s \n", pessoa1.nome);
        printf("Idade: %d \n", pessoa1.idade);
        printf("Nacionalidade: %s \n", pessoa1.nacionalidade);
        printf("Sexo: %c \n", pessoa1.sexo);
    }
    return 0;
}
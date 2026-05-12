#include <stdio.h>
#include <string.h>

#define MAX_USUARIOS 10
 
struct dados_cliente{
    char nome[50];
    float renda_mensal;
    int ano_nascimento;
    int possui_carro;
};

int times = 0;

void cadastrar(){
    if(times >= MAX_USUARIOS){
        printf("Limite de usuarios atingido.\n");
        return;
    }

    struct dados_cliente cliente;

    printf("Digite o nome do cliente: \n");
    fgets(cliente.nome, sizeof(cliente.nome), stdin);
    cliente.nome[strcspn(cliente.nome, "\n")] = '\0';

    printf("Digite a renda mensal do cliente: \n");
    scanf("%f", &cliente.renda_mensal);

    printf("Digite o ano de nascimento do cliente: \n");
    scanf("%d", &cliente.ano_nascimento);

    printf("O cliente possui carro? (1-Sim / 0-Nao): \n");
    scanf("%d", &cliente.possui_carro);

    times++;
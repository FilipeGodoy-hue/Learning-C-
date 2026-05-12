#include <stdio.h>
#include <string.h> //Bibliotecas

#define MAX_USUARIOS 50 //definindo um limite de cadastros

struct Data { //struct da data de nascimento
    int dia;
    int mes;
    int ano;
};

struct Usuario { //struct das informacoes do usuario
    char login[30];
    char senha[20];
    char nome[60];
    char endereco[100];
    char telefone[20];
    struct Data nascimento;
};

int total = 0;
struct Usuario usuarios[MAX_USUARIOS];

void limpar_buffer() { //descarta o que sobrou na entrada anterior
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void ler_string(const char *campo, char *destino, int tamanho) { //ler as srings do usuario
    printf("%s: ", campo);
    fgets(destino, tamanho, stdin);
    destino[strcspn(destino, "\n")] = '\0';
}

int login_existe(const char *login) {
    for (int i = 0; i < total; i++) {
        if (strcmp(usuarios[i].login, login) == 0)
            return i;
    }
    return -1;
}

int validar_usuario(char *login_out, char *senha_out) { //valindando o login e a senha
    char login[30], senha[20];

    printf("Login: ");
    scanf("%29s", login);
    printf("Senha: ");
    scanf("%19s", senha);
    limpar_buffer();

    int pos = login_existe(login);
    if (pos == -1) {
        printf("Login nao encontrado.\n");
        return -1;
    }
    if (strcmp(usuarios[pos].senha, senha) != 0) {
        printf("Senha incorreta.\n");
        return -1;
    }

    if (login_out) strcpy(login_out, login);
    if (senha_out) strcpy(senha_out, senha);
    return pos;
}

void cadastrar() { //impondo o limite que foi declarado no inicio com o #define
    if (total >= MAX_USUARIOS) {
        printf("Limite de usuarios atingido.\n");
        return;
    }

    struct Usuario u;

    printf("\n NOVO CADASTRO \n"); 

    do {
        ler_string("Login", u.login, sizeof(u.login));
        if (login_existe(u.login) != -1)
            printf("Login ja cadastrado. Escolha outro.\n");
    } while (login_existe(u.login) != -1);

    ler_string("Senha", u.senha, sizeof(u.senha));
    ler_string("Nome completo", u.nome, sizeof(u.nome));
    ler_string("Endereco", u.endereco, sizeof(u.endereco));
    ler_string("Telefone", u.telefone, sizeof(u.telefone));

    printf("Data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &u.nascimento.dia, &u.nascimento.mes, &u.nascimento.ano);
    limpar_buffer();

    usuarios[total] = u;
    total++;

    printf("Cadastro realizado com sucesso!\n");
}

void exibir_usuario(int pos) { //aqui coloquei ponteiro que foi assunto da ultima aula, para acessar os dados do usuario de forma mais facil
    struct Usuario *u = &usuarios[pos];
    printf("\n dados do usuario \n");
    printf("Login     : %s\n", u->login);
    printf("Nome      : %s\n", u->nome);
    printf("Endereco  : %s\n", u->endereco);
    printf("Telefone  : %s\n", u->telefone);
    printf("Nascimento: %02d/%02d/%04d\n",
        u->nascimento.dia, u->nascimento.mes, u->nascimento.ano);
}

void acessar_dados() {
    printf("\n acessar dados\n");
    int pos = validar_usuario(NULL, NULL);
    if (pos == -1) return;
    exibir_usuario(pos);
}

void atualizar_dados() {
    printf("\n atualizar dados\n");
    int pos = validar_usuario(NULL, NULL);
    if (pos == -1) return;

    struct Usuario *u = &usuarios[pos];
    int opcao;

    printf("\nO que deseja atualizar?\n");
    printf("1 - Senha\n");
    printf("2 - Nome\n");
    printf("3 - Endereco\n");
    printf("4 - Telefone\n");
    printf("5 - Data de nascimento\n");
    printf("0 - Cancelar\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    limpar_buffer();

    switch (opcao) {
        case 1:
            ler_string("Nova senha", u->senha, sizeof(u->senha));
            break;
        case 2:
            ler_string("Novo nome", u->nome, sizeof(u->nome));
            break;
        case 3:
            ler_string("Novo endereco", u->endereco, sizeof(u->endereco));
            break;
        case 4:
            ler_string("Novo telefone", u->telefone, sizeof(u->telefone));
            break;
        case 5:
            printf("Nova data de nascimento (dd mm aaaa): ");
            scanf("%d %d %d",
                &u->nascimento.dia, &u->nascimento.mes, &u->nascimento.ano);
            limpar_buffer();
            break;
        case 0:
            printf("Atualizacaoo cancelada.\n");
            return;
        default:
            printf("Opcao invalida.\n");
            return;
    }

    printf("Dados atualizados com sucesso!\n");
}

int main() {
    int opcao;

    printf(" SISTEMA DE CADASTRO DE USUARIOS \n");

    do {
        cadastrar();

        printf("\nDeseja cadastrar outro usuario? (1-Sim / 0-Nao): ");
        scanf("%d", &opcao);
        limpar_buffer();
    } while (opcao == 1);

    do {
        printf("\n Menu Principal \n");
        printf("1 - Acessar dados\n");
        printf("2 - Atualizar dados\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        limpar_buffer();

        switch (opcao) {
            case 1: acessar_dados(); break;
            case 2: atualizar_dados(); break;
            case 0: printf("Encerrando o programa.\n"); break;
            default: printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
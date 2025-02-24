#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USUARIOS 100 


typedef struct {
    char nome[50];
    int idade;
} Usuario;

Usuario usuarios[MAX_USUARIOS]; 
int totalUsuarios = 0; 

void mensagemInicial() {
    printf("Olá, mundo! Este é o início do projeto em C.\n");
}

void exibirMenu() {
    printf("====================================\n");
    printf("      Sistema de Cadastro em C      \n");
    printf("====================================\n");
    printf("1 - Cadastrar usuário\n");
    printf("2 - Listar usuários\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: ");
}

void cadastrarUsuario() {
    if (totalUsuarios < MAX_USUARIOS) {
        printf("Digite o nome do usuário: ");
        scanf(" %[^\n]s", usuarios[totalUsuarios].nome);
        printf("Digite a idade do usuário: ");
        scanf("%d", &usuarios[totalUsuarios].idade);

        totalUsuarios++;
        printf("Usuário cadastrado com sucesso!\n\n");
    } else {
        printf("Limite de usuários atingido!\n");
    }
}

void listarUsuarios() {
    if (totalUsuarios == 0) {
        printf("Nenhum usuário cadastrado ainda.\n");
    } else {
        printf("\n=== Lista de Usuários ===\n");
        for (int i = 0; i < totalUsuarios; i++) {
            printf("%d. Nome: %s, Idade: %d\n", i + 1, usuarios[i].nome, usuarios[i].idade);
        }
    }
}

int main() {
    mensagemInicial();

    int opcao;
    
    do {
        exibirMenu();
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                cadastrarUsuario();
                break;
            case 2:
                listarUsuarios();
                break;
            case 3:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}

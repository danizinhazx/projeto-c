#include <stdio.h>

void exibirMenu() {
    printf("====================================\n");
    printf("      Sistema de Cadastro em C      \n");
    printf("====================================\n");
    printf("1 - Cadastrar usuário\n");
    printf("2 - Listar usuários\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    int opcao;
    
    do {
        exibirMenu();
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Função de cadastro ainda será implementada.\n");
                break;
            case 2:
                printf("Função de listagem ainda será implementada.\n");
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

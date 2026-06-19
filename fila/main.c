#include <stdio.h>
#include <string.h>
#include "fila.h"

int main() {
    Fila f;
    Cliente cliente;
    int opcao;
    char nome[TAM_NOME];

    inicializar(&f);

    printf("=== Fila de Atendimento ===\n");

    do {
        printf("\n1. Entrar na fila\n");
        printf("2. Atender proximo\n");
        printf("3. Ver proximo da fila\n");
        printf("4. Exibir fila\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("Nome do cliente: ");
                fgets(nome, TAM_NOME, stdin);
                nome[strcspn(nome, "\n")] = '\0';
                enfileirar(&f, nome);
                break;
            case 2:
                if (desenfileirar(&f, &cliente)) {
                    printf("Atendendo: \"%s\" (Senha: %03d)\n", cliente.nome, cliente.senha);
                }
                break;
            case 3:
                ver_proximo(&f);
                break;
            case 4:
                exibir_fila(&f);
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}

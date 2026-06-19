#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main() {
    Pilha p;
    Livro livro;
    int opcao;
    char titulo[TAM_TITULO];

    inicializar(&p);

    printf("Pilha de Livros\n");

    do {
        printf("\n1. Empilhar livro\n");
        printf("2. Desempilhar livro\n");
        printf("3. Ver livro no topo\n");
        printf("4. Exibir pilha\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("Titulo do livro: ");
                fgets(titulo, TAM_TITULO, stdin);
                titulo[strcspn(titulo, "\n")] = '\0';
                empilhar(&p, titulo);
                break;
            case 2:
                if (desempilhar(&p, &livro)) {
                    printf("Livro retirado: \"%s\"\n", livro.titulo);
                }
                break;
            case 3:
                ver_topo(&p);
                break;
            case 4:
                exibir_pilha(&p);
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while +(opcao != 0);

    return 0;
}

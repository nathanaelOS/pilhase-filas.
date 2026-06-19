#include <stdio.h>
#include <string.h>
#include "pilha.h"

void inicializar(Pilha *p) {
    p->topo = -1;
}

int esta_cheia(Pilha *p) {
    return p->topo == MAX - 1;
}

int esta_vazia(Pilha *p) {
    return p->topo == -1;
}

int empilhar(Pilha *p, char *titulo) {
    if (esta_cheia(p)) {
        printf("Pilha cheia! Nao e possivel adicionar mais livros.\n");
        return 0;
    }
    p->topo++;
    strncpy(p->livros[p->topo].titulo, titulo, TAM_TITULO - 1);
    p->livros[p->topo].titulo[TAM_TITULO - 1] = '\0';
    printf("Livro \"%s\" empilhado.\n", titulo);
    return 1;
}

int desempilhar(Pilha *p, Livro *livro) {
    if (esta_vazia(p)) {
        printf("Pilha vazia! Nao ha livros para retirar.\n");
        return 0;
    }
    *livro = p->livros[p->topo];
    p->topo--;
    return 1;
}

void ver_topo(Pilha *p) {
    if (esta_vazia(p)) {
        printf("A pilha esta vazia.\n");
        return;
    }
    printf("Livro no topo: \"%s\"\n", p->livros[p->topo].titulo);
}

void exibir_pilha(Pilha *p) {
    if (esta_vazia(p)) {
        printf("A pilha esta vazia.\n");
        return;
    }
    printf("\n Pilha de Livros (topo -> base)\n");
    for (int i = p->topo; i >= 0; i--) {
        printf("[%d] %s\n", i + 1, p->livros[i].titulo);
    }

}

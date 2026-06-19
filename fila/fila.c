#include <stdio.h>
#include <string.h>
#include "fila.h"

void inicializar(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
    f->tamanho = 0;
    f->proxima_senha = 1;
}

int esta_cheia(Fila *f) {
    return f->tamanho == MAX;
}

int esta_vazia(Fila *f) {
    return f->tamanho == 0;
}

int enfileirar(Fila *f, char *nome) {
    if (esta_cheia(f)) {
        printf("Fila cheia! Nao e possivel adicionar mais clientes.\n");
        return 0;
    }
    strncpy(f->clientes[f->fim].nome, nome, TAM_NOME - 1);
    f->clientes[f->fim].nome[TAM_NOME - 1] = '\0';
    f->clientes[f->fim].senha = f->proxima_senha++;
    printf("Cliente \"%s\" entrou na fila. Senha: %03d\n", nome, f->clientes[f->fim].senha);
    f->fim = (f->fim + 1) % MAX;
    f->tamanho++;
    return 1;
}

int desenfileirar(Fila *f, Cliente *cliente) {
    if (esta_vazia(f)) {
        printf("Fila vazia! Nao ha clientes para atender.\n");
        return 0;
    }
    *cliente = f->clientes[f->inicio];
    f->inicio = (f->inicio + 1) % MAX;
    f->tamanho--;
    return 1;
}

void ver_proximo(Fila *f) {
    if (esta_vazia(f)) {
        printf("A fila esta vazia.\n");
        return;
    }
    printf("Proximo a ser atendido: \"%s\" (Senha: %03d)\n",
           f->clientes[f->inicio].nome, f->clientes[f->inicio].senha);
}

void exibir_fila(Fila *f) {
    if (esta_vazia(f)) {
        printf("A fila esta vazia.\n");
        return;
    }
    printf("\n Fila de Atendimento \n");
    printf("Posicao | Senha | Nome\n");
    for (int i = 0; i < f->tamanho; i++) {
        int idx = (f->inicio + i) % MAX;
        printf("   %d    |  %03d  | %s\n", i + 1, f->clientes[idx].senha, f->clientes[idx].nome);
    }
}

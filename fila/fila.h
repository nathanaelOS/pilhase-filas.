#ifndef FILA_H
#define FILA_H

#define MAX 10
#define TAM_NOME 100

typedef struct {
    char nome[TAM_NOME];
    int senha;
} Cliente;

typedef struct {
    Cliente clientes[MAX];
    int inicio;
    int fim;
    int tamanho;
    int proxima_senha;
} Fila;

void inicializar(Fila *f);
int esta_cheia(Fila *f);
int esta_vazia(Fila *f);
int enfileirar(Fila *f, char *nome);
int desenfileirar(Fila *f, Cliente *cliente);
void ver_proximo(Fila *f);
void exibir_fila(Fila *f);

#endif

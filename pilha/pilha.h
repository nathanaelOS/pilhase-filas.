#ifndef PILHA_H
#define PILHA_H

#define MAX 10
#define TAM_TITULO 100

typedef struct {
    char titulo[TAM_TITULO];
} Livro;

typedef struct {
    Livro livros[MAX];
    int topo;
} Pilha;

void inicializar(Pilha *p);
int esta_cheia(Pilha *p);
int esta_vazia(Pilha *p);
int empilhar(Pilha *p, char *titulo);
int desempilhar(Pilha *p, Livro *livro);
void ver_topo(Pilha *p);
void exibir_pilha(Pilha *p);

#endif

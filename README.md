# Trabalho II - Pilhas e Filas

Implementação prática das estruturas de dados **Pilha** e **Fila** em C.

## Estrutura do Projeto

```
trabalho2/
├── pilha/
│   ├── pilha.h      # Definição da estrutura e protótipos
│   ├── pilha.c      # Implementação das funções
│   └── main.c       # Programa principal
├── fila/
│   ├── fila.h       # Definição da estrutura e protótipos
│   ├── fila.c       # Implementação das funções
│   └── main.c       # Programa principal
├── README.md
└── vantagens_desvantagens.md
```

## Aplicações

- **Pilha**: Pilha de livros — simula o empilhamento e desempilhamento de livros físicos
- **Fila**: Fila de atendimento — simula uma fila de banco/caixa com geração de senha

## Compilação e Execução

### Pilha de Livros
```bash
cd pilha
gcc pilha.c main.c -o pilha
./pilha
```

### Fila de Atendimento
```bash
cd fila
gcc fila.c main.c -o fila
./fila
```

## Funcionalidades

### Pilha de Livros
- Empilhar livro
- Desempilhar livro
- Ver livro no topo
- Exibir toda a pilha

### Fila de Atendimento
- Entrar na fila (gera senha automática)
- Atender próximo cliente
- Ver quem é o próximo
- Exibir toda a fila

# Vantagens e Desvantagens

## Pilha, Aplicação: Pilha de Livros

A pilha segue: o último livro colocado é o primeiro a ser retirado.

## Vantagens

- Simplicidade de uso: as operações de empilhar e desempilhar são intuitivas e rápidas 
- Controle de ordem natural: o livro mais recentemente adicionado fica sempre acessível no topo, facilitando desfazer ações
- Baixo custo de acesso ao topo: acessar o elemento do topo não exige percorrer a estrutura
- Implementação simples com array: fácil de implementar e entender para fins didáticos

### Desvantagens

- Acesso restrito: não é possível acessar um livro no meio da pilha sem desempilhar os de cima
- Tamanho fixo (array estático): a capacidade máxima precisa ser definida previamente; overflow se ultrapassada
- Não permite busca eficiente: para encontrar um livro específico, seria necessário desempilhar todos acima dele
- Não reflete bem cenários reais complexos: em uma biblioteca real, livros são acessados de qualquer posição

---

## Fila, Aplicação: Fila de Atendimento

A fila segue: o primeiro cliente a entrar é o primeiro a ser atendido.

### Vantagens

- Justiça no atendimento: garante que quem chegou primeiro seja atendido primeiro
- Operações eficientes: enfileirar e desenfileirar são O(1) com implementação circular
- Geração de senha automática: facilita o controle e identificação de cada cliente
- Muito adequada para a aplicação: a fila de atendimento é um caso de uso natural e direto do FIFO

### Desvantagens

- Tamanho fixo (array estático): há um limite máximo de clientes na fila; se atingido, novos não podem entrar
- Sem prioridade: todos os clientes são tratados igualmente; não contempla, por exemplo, idosos ou gestantes sem adaptação
- Acesso apenas nas extremidades: não é possível visualizar ou remover um cliente do meio sem reorganizar a estrutura
- Complexidade extra com array circular: o controle dos índices `inicio` e `fim` exige atenção para evitar erros de overflow/underflow

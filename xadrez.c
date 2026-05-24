#include <stdio.h>

// Desafio de Xadrez - MateCheck 
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    
    // Definição do número de casas que cada peça vai se mover (Constantes)
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Variáveis de controle para os loops
    int i;
    int contadorBispo;
    int contadorRainha;

    // Implementação de Movimentação da Torre
    // Movimento: 5 casas para a direita
    // Estrutura utilizada: Loop FOR
    printf("--- Movimento da Torre ---\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção a cada casa percorrida
    }
    printf("\n"); // Pula uma linha para organizar a saída

    // Implementação de Movimentação do Bispo
    // Movimento: 5 casas na diagonal para cima e à direita
    // Estrutura utilizada: Loop WHILE
    printf("--- Movimento do Bispo ---\n");
    contadorBispo = 1; // Inicializa o contador do loop
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n"); // Combinação de duas direções para a diagonal
        contadorBispo++; // Avança para a próxima casa
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Movimento: 8 casas para a esquerda
    // Estrutura utilizada: Loop DO-WHILE
    printf("--- Movimento da Rainha ---\n");
    contadorRainha = 1; // Inicializa o contador do loop
    do {
        printf("Esquerda\n"); // Imprime a direção
        contadorRainha++; // Avança para a próxima casa
    } while (contadorRainha <= casasRainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // (Pode ser implementado nos próximos níveis de estudo)

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // (Pode ser implementado nos próximos níveis de estudo)

    return 0;
}

#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{

    int torre, bispo = 1, rainha = 1;

    // Mover a peça torre em cinco casas para a direita
    // estrutura de repetição FOR

    printf("=== Desafio de Xadrez===\n\n");
    printf("Movimentação de peças:\n\n");

    printf("Posição da Torre: \n");

    for (torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }

    printf("\n");

    // Mover a peça bispo em cinco casas para cima e à direita( Ex: cima,direita)
    // estrutura de repetição WHILE

    printf("Posição do bispo: ");

    while (bispo <= 5)
    {
        printf("\nCima, direita\n");
        bispo++;
    }

    printf("\n");

    // Mover a peça rainha em oito casas para a esquerda
    // estrutura de repetição DO-WHILE

    printf("Posição da rainha: \n");

    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    printf("\n");

    return 0;
}

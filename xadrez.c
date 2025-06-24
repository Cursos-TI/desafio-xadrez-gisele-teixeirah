#include <stdio.h>

// Desafio de Xadrez - Nivel AVENTUREIRO

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

    printf("Posição do bispo:\n");

    while (bispo <= 5)
    {
        printf("Cima, direita\n");
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

    // Movimento do cavalo
    // representando movimento em L
    int cavalohorizontal;
    int cavalovertical = 1;

    printf("Posição do cavalo:\n");

    for (cavalohorizontal = 1; cavalohorizontal <= 1; cavalohorizontal++)
    {
        while (cavalovertical <= 2)
        {
            // 2 casas para baixo
            printf("Baixo\n");
            cavalovertical++;
        }
        // 1 casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}

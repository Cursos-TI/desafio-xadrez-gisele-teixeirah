#include <stdio.h>

// Desafio de Xadrez - Nivel Mestre


// Função recursiva da TORRE: move para a direita
void movimentoTorre(int torre)
{
    if (torre > 0)
    {
        printf("Direita\n");
        movimentoTorre(torre - 1); // Chama a si mesmo até a parada
    }
}

// Função recursiva do BISPO com loops aninhados (diagonal: cima e direita)
void movimentoBispo(int passo)
{
    if (passo < 5) // limita a recursão a 5 passos
    {
        int i, j;

        for (i = 0; i < 1; i++) // Loop vertical
        {
            for (j = 0; j < 1; j++) // Loop horizontal
            {
                {
                    printf("Cima\n");
                    printf("Direita\n");
                }
            }
        }
        movimentoBispo(passo + 1);
    }
}


// Função recursiva da RAINHA: move para a esquerda
void movimentoRainha(int Rainha)
{
    if (Rainha > 0)
    {
        printf("Esquerda\n");
        movimentoRainha(Rainha - 1);
    }
}

// Função do CAVALO com loops aninhados (movimento em L: 2 para cima, 1 para direita)
void movimentoCavalo() {
    int movimentosFeitos = 0;

    for (int i = 0; i < 1; i++) {  // Loop externo, representa o "L" completo
        // Parte vertical do L (duas vezes "Cima")
        for (int cima = 0; cima < 2; cima++) {
            printf("Cima\n");
        }

        // Parte horizontal do L (uma vez "Direita")
        for (int direita = 0; direita < 1; direita++) {
            printf("Direita\n");
        }

        movimentosFeitos++;

        // Se já fizemos o movimento completo em L, podemos encerrar com break
        if (movimentosFeitos == 1) {
            break;
        }
    }
}


int main()
{
    printf("=== Desafio de Xadrez===\n\n");
    printf("Movimentação de peças:\n\n");


    int torre = 5, bispo = 0, rainha = 8, cavalo;

    // Mover a peça torre em cinco casas para a direita

    printf("Posição da Torre: \n");
    movimentoTorre(torre);
    printf("\n");

    //=============================================================

    // Mover a peça bispo em cinco casas para cima e à direita

    printf("Posição do bispo:\n");
    movimentoBispo(bispo);
    printf("\n");

    //=============================================================

    // Mover a peça rainha em oito casas para a esquerda

    printf("Posição da rainha: \n");
    movimentoRainha(rainha);
    printf("\n");

    //=============================================================

    // Movimento do cavalo
    // representando movimento em L
   
    printf("Posição do cavalo:\n");
    movimentoCavalo();
    printf("\n");

    return 0;
}

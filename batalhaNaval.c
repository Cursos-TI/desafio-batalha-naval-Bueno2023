#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int matriz[10][10]; // Declara a matriz 10x10

    // Inicializa o tabuleiro com água (valor 0)
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz[i][j] = 0;
        }
    }

    // Define o navio
    matriz[4][7] = 3; // Linha 5, Coluna H
    matriz[5][7] = 3; // Linha 6, Coluna H
    matriz[6][7] = 3; // Linha 7, Coluna H

    // Define o navio2
    matriz[2][4] = 3; // Linha 2, Coluna E
    matriz[2][5] = 3; // Linha 2, Coluna F
    matriz[2][6] = 3; // Linha 2, Coluna G

    // Imprime o tabuleiro atualizado
    printf("\nTabuleiro:\n");
    printf("  "); // Espaços para alinhar com as letras das colunas
    for (int j = 0; j < 10; j++)
    {
        printf("%c ", 'A' + j); // Letras das colunas
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i + 1); // Números das linhas
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", matriz[i][j]); // Imprime os valores da matriz
        }
        printf("\n");
    }

    return 0;
}

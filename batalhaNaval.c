#include <stdio.h>

int main() {    
    
    // Nível Novato - Posicionamento dos Navios
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'}; //array de strings para as colunas
    char tabuleiro[10][10]; //matriz do tabuleiro
    
    char navio_vertical[3] = {'3','3','3'}; //definindo tamanho do navio vertical e sua representação na matriz
    int linha_navio_vertical = 3, coluna_navio_vertical = 5; //definindo posição do navio vertical (coluna fixa, linha variável)    
    
    char navio_horizontal[3] = {'3','3','3'}; //definindo tamanho do navio horizontal e sua representação    
    int linha_navio_horizontal = 8, coluna_navio_horizontal = 7; //definindo posição do navio horizontal (coluna variável, linha fixa)
    
    char navio_diagonal1[3] = {'3','3','3'}; //definindo tamanho do navio diagonal 1 e sua representação na matriz
    int linha_navio_diagonal1 = 1, coluna_navio_diagonal1 = 1; //definindo posição do navio diagonal 1 (linha = coluna)    
    
    char navio_diagonal2[3] = {'3','3','3'}; //definindo tamanho do navio diagonal 2 e sua representação na matriz   
    int linha_navio_diagonal2 = 0, coluna_navio_diagonal2 = 9; //definindo posição do navio diagonal 2 (linha + coluna = 9)

    printf("     TABULEIRO DE BATALHA NAVAL \n"); //printando o enunciado    
    printf("   "); //espaço para a coluna de números

    for (int i = 0; i < 10; i++) { //exibindo cabeçalho de colunas
        printf(" %c ", coluna[i]);
    }
    printf("\n");
    
    //definindo '0' como representação inicial para todas as linhas e colunas (água)
    for (int linha = 0; linha < 10; linha++) { 
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = '0'; 
        }
    }

    //definindo posição do navio vertical
    for (int linha = 0; linha < 3; linha++) {  
        tabuleiro[linha_navio_vertical + linha][coluna_navio_vertical] = navio_vertical[linha];
    }

    //definindo posição do navio horizontal
    for (int coluna = 0; coluna < 3; coluna++) {  
        tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + coluna] = navio_horizontal[coluna];
    }

    //definindo posição do navio diagonal 1
    for (int i = 0; i < 3; i++) {
        if (linha_navio_diagonal1 == coluna_navio_diagonal1) {
            tabuleiro[linha_navio_diagonal1][coluna_navio_diagonal1] = navio_diagonal1[i];
            linha_navio_diagonal1++;
            coluna_navio_diagonal1++;
        }
    }

    //definindo posição do navio diagonal 2
    for (int i = 0; i < 3; i++) {
        if (linha_navio_diagonal2 + coluna_navio_diagonal2 == 9) {
            tabuleiro[linha_navio_diagonal2][coluna_navio_diagonal2] = navio_diagonal1[i];
            linha_navio_diagonal2++;
            coluna_navio_diagonal2--;
        }
    }

    //loop externo printa o número da linha e entra no interno,
    //loop interno imprime o valor de '0' na linha toda até sua condição se tornar falsa e encerra;
    //loop externo se completa pulando a linha e começa de novo até sua condiçãi se tornar falsa
    for (int linhas = 0; linhas < 10; linhas++) { 
        printf("%2d ", linhas + 1); 
        for (int colunas = 0; colunas < 10; colunas++) { 
            printf(" %c ", tabuleiro[linhas][colunas]); 
        }
        printf("\n");
    }
    return 0;
}

     

    
    



    
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0



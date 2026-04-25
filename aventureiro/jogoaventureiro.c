#include <stdio.h>


//loop externo = linhas
//loop interno = colunas



#define LINHAS 10
#define COLUNAS 10




int main(){


    // tabuleiro do jogo

    int tabuleiro [LINHAS][COLUNAS];

    //inicialização

    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
        (tabuleiro[i][j] = 0);

        }

    }

// coordenadas

int linhaH = 2, colunaH = 3; //Horizontal // Primeiro navio
int linhaV = 5, colunaV = 7; //Vertical // Segundo navio
int linha1 = 4, coluna1 = 4; // Diagonal descendo para direita // Terceiro navio
int linha2 = 9, coluna2 = 0; // Diagonal subindo para direita // Quarto navio

// 1° Navio na horizontal

for (int i = 0; i < 3; i++) {
    tabuleiro[linhaH][colunaH + i] = 3;
}

// 2° Navio na vertical

for (int i = 0; i < 3; i++) {
    tabuleiro[linhaV + i][colunaV] = 3;
}

// 3° Navio 

for (int i = 0; i < 3; i++) {
    tabuleiro[linha1 + i][coluna1 + i] = 3;
}

// 4° Navio

for (int i = 0; i < 3; i++) {
    tabuleiro[linha2 - i][coluna2 + i] = 3;
}


// Mostra o tabuleiro do jogo

printf("=== BATALHA NAVAL ===\n\n");

for (int i = 0; i < LINHAS; i++) {
    for (int j = 0; j < COLUNAS; j++) {
        
    if (tabuleiro[i][j] == 0)
        printf("~ ");
    else
        printf("N ");

    }
     printf("\n");
}


    return 0;
     
}





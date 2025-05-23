#include <stdio.h>

#define LINHAS 10 
#define COLUNAS 10

void imprimeTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

@@ -20,23 +23,45 @@ void imprimeTabuleiro(int tabuleiro[10][10]) {
    return;
};

void posicionaNavioHorizontal(int tabuleiro[LINHAS][COLUNAS], int posicaoColuna, int posicaoLinha) {
    for (int i = posicaoColuna; i < posicaoColuna + 3; i++) {
        tabuleiro[posicaoLinha][i] = 3;
    }
    return;
}

void posicionaNavioVertical(int tabuleiro[LINHAS][COLUNAS], int posicaoColuna, int posicaoLinha) {
    for (int i = posicaoLinha; i < posicaoLinha + 3; i++) {
        tabuleiro[i][posicaoColuna] = 3;
    }

    return;
}

void posicionaNavioDiagonalDireita(int tabuleiro[LINHAS][COLUNAS], int posicaoColuna, int posicaoLinha) {
    int controle = 0;
    for (int i = posicaoLinha; i < posicaoLinha + 3; i++) {
        tabuleiro[posicaoLinha - controle][posicaoColuna + controle] = 3;
        controle++;
    }
    
    return;

};

void posicionaNavioDiagonalEsquerda(int tabuleiro[LINHAS][COLUNAS], int posicaoColuna, int posicaoLinha) {
    int controle = 0;
    for (int i = posicaoLinha; i < posicaoLinha + 3; i++) {
        tabuleiro[posicaoLinha + controle][posicaoColuna + controle] = 3;
        controle++;
    }
    
    return;

};

int main() {
    int tabuleiro[LINHAS][COLUNAS];

    for(int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
@@ -49,6 +74,8 @@ int main() {

    posicionaNavioHorizontal(tabuleiro, 2, 3);
    posicionaNavioVertical(tabuleiro, 3, 5);
    posicionaNavioDiagonalDireita(tabuleiro, 7, 3);
    posicionaNavioDiagonalEsquerda(tabuleiro, 5, 7);

    imprimeTabuleiro(tabuleiro);

    return 0;
}

};

void cone(int tabuleiro[LINHAS][COLUNAS], int y, int x) {
    int altura = 3;
    int largura = 5;

    for (int i = 0; i < altura; i++) {
        int inicio = y - i;
        int fim = y + i;

        for (int j = inicio; j <= fim; j++) {
            if (j >= 0 && j < 10 && (x + i) < 10) {
                tabuleiro[x + i][j] = 3;
            }
        }
    }
}

void cruz(int tabuleiro[LINHAS][COLUNAS]) {
    int meio = LINHAS / 2; 
    int largura = COLUNAS / 2;

    for (int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            if (i == meio || j == largura) {
                tabuleiro[i][j] = 3;
            }

        }
    }
}

void octaedro(int tabuleiro[LINHAS][COLUNAS], int y, int x) {
    int altura = 3;
    int largura = 3;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (
            (i == y && j == x) || 
            (i == y - 1 && j == x) || 
            (i == y + 1 && j == x) || 
            (i == y && j == x - 1) || 
            (i == y && j == x + 1)) {
            tabuleiro[i][j] = 3;
        }

        }
    }
}



int main() {
    int tabuleiro[LINHAS][COLUNAS];

@@ -77,6 +128,10 @@ int main() {
    posicionaNavioDiagonalDireita(tabuleiro, 7, 3);
    posicionaNavioDiagonalEsquerda(tabuleiro, 5, 7);

    cone(tabuleiro, 5, 5);
    cruz(tabuleiro);
    octaedro(tabuleiro, 2, 2);

    imprimeTabuleiro(tabuleiro);

    return 0;

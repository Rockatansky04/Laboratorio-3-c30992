#include <stdio.h>
#define TAMANO 5

int EncontrarDiagonalMasLarga(int Matriz[TAMANO][TAMANO]) {
    
    int NumDiag = 2*TAMANO-1;
    int Diagonales [NumDiag];

    for (int i = 0; i < NumDiag; i++) {
        Diagonales[i] = 0;
    }

    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            int Diag = i + j;
            int Correcion = Diag + (TAMANO - 1);
            Diagonales[Correcion] += Matriz[i][j];
        }
    }

    int SumaMaxima = Diagonales[0];
    int DiagonalMasUNos = 0;  

    for (int i = 1; i < NumDiag; i++) {
        if (Diagonales[i] > SumaMaxima) {
            SumaMaxima = Diagonales[i];
            DiagonalMasUNos = i;
        }
    }

    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            if (i + j == DiagonalMasUNos) {    
                printf("%d ", Matriz[i][j]);
            }
        }
    }
    printf("\n");

    return SumaMaxima;
}

int main() {

    int Matriz[TAMANO][TAMANO] = {
        {0, 1, 1, 1, 0},
        {0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0},
        {0, 1, 1, 0, 1},
        {1, 0, 1, 0, 1},
        };
    
        int DiagonalMasLarga = EncontrarDiagonalMasLarga(Matriz);
        printf("La secuencia de 1s más grande es: %d\n", DiagonalMasLarga);
        return 0;
}


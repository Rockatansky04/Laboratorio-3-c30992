#include <stdio.h>

void SumaDiagonales(int n, int Matriz[][n]) {

    int NumDiag = 2*n-1;
    int Sumas [NumDiag];

    for (int i = 0; i < NumDiag; i++) {
        Sumas[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int Diag = i - j;
            int Correcion = Diag + (n - 1);
            Sumas[Correcion] += Matriz[i][j];
        }
    }

    printf("Sumas de las diagonales(De esquina superior derecha a la inferior izq): ");
    for (int i = 0; i < NumDiag; i++) {
        printf("%d ", Sumas[i]);
    }

}

int main() {
    int Matriz3x3[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("Matriz 3x3:\n");
    SumaDiagonales(3, Matriz3x3);
    printf("\n");

    int Matriz4x4 [4][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    printf("Matriz 4x4:\n");
    SumaDiagonales(4, Matriz4x4);
    printf("\n");


    int Matriz7x7 [7][7] = {
        {10, 20, 30, 40,50,60,80},
        {50, 60, 70, 80,30,14,59},
        {90, 10, 11, 12,90,36,28},
        {13, 14, 15, 16,93,31,22},
        {13, 14, 15, 16,93,31,22},
        {13, 14, 15, 16,93,31,22},
        {13, 14, 15, 16,93,31,22}                     
    };
    
    printf("Matriz 7x7:\n");
    SumaDiagonales(7, Matriz7x7);
    printf("\n");
   
    return 0;
}

    

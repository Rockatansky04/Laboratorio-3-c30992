#include <stdio.h>

void TraBinario(int n) {
    int binario[32]; 
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }
    
    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
}

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    
    printf("El número %d en binario es: ", numero);
    TraBinario(numero);
    printf("\n");
    
    return 0;
}
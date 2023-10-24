#include <stdio.h>

int main() {
    int N;
    int totalNumeros = 0;
    int numCeros = 0;
    int numPositivos = 0;
    int numNegativos = 0;
    printf("Ingrese la cantidad de números (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("La cantidad de números debe ser un entero positivo.\n");
        return 1;
    }
    

    return 0;
}
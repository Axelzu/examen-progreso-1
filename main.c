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
    printf("Ingrese los %d números:\n", N);

    for (int i = 0; i < N; i++) {
        int num;
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
    

    if (num == 0) {
            numCeros++;
        } else if (num > 0) {
            numPositivos++;
        } else {
            numNegativos++;
        }

        totalNumeros++;
    }

    

    return 0;
}
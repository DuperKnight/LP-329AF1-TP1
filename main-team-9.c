#include <stdio.h>
#include "functions-team-9.h"

int main () {
    int i=1, k, tamanho_vetor=12;
    int vetor[tamanho_vetor];

    // 1. Entrada de 12 números inteiros entre 2 e 26.
    while (i <= tamanho_vetor) {
        printf("Insira o número %d: ", i);
        scanf("%d", &k);

        if (k > 26 || k <2) {
            printf("O número precisa estar entre 2 e 26.\n");
        } else {
            vetor[i-1] = k;
            i += 1;
        }
    }

    // 2. Ordenar os 12 números de forma crescente.
    int *n_vetor = ordenar(vetor, tamanho_vetor);

    printf("Números Inseridos (em ordem crescente): ");
    for (i = 0; i <= tamanho_vetor - 1; i++) {
        printf("%d ", n_vetor[i]);
    }
    printf("\n");

    // 3. Soma de todos os valores do vetor.
    int sum = 0;
    for (i = 0; i <= tamanho_vetor - 1; i++) {
        sum += n_vetor[i];
    }
    printf("Soma dos números inseridos: %d\n", sum);

    // 4. Coseno dos valores da segunda metade do vetor
    double *v_coseno;
    for (i = tamanho_vetor-1; i >= tamanho_vetor/2; i -= 1) {
        v_coseno[tamanho_vetor-i-1] = n_vetor[i];
    }

    double *coseno = cosenos(v_coseno, tamanho_vetor);
    printf("Coseno dos valores da segunda metade do vetor: ");
    for (i = 0; i <= tamanho_vetor/2 - 1; i++) {
        printf("%f ", coseno[i]);
    }
    printf("\n");

    return 0;
}

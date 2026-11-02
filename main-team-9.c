#include <stdio.h>
#include "functions-team-9.h"

int main () {
    // Declarar variável de escolha
    int func;

    // Menu
    printf("Digita o número da funcionlaidade que desejas utilizar\n\n");
    printf("0. Sair do programa\n");
    printf("1. Devolução do vetor ordenado por ordem crescente dos seus valores simétricos\n");
    printf("2. Cálculo da soma de todos os elementos no vetor\n");
    printf("3. Cálculo do coseno (cos) da segunda metade dos elementos no vetor\n");
    printf("4. Construção de uma matriz 12 por 12, em que cada linha é composta pelo vetor lido (primeira linha) e por permutações dos seus valores\n");
    printf("5. Identificação do valor mais próximo de 25\n");
    printf("6. Devolução dos valores do vetor que são divisíveis por três\n");

    do {
        scanf("%i", &func);
    } while (func < 0 || func > 6);

    switch (func) {
        case 0:
            return 0;
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
    }
        
}

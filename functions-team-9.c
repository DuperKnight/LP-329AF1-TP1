#include <stdio.h>
#include <math.h>
#include "functions-team-9.h"

// teste

int *ordenar (int lista[], int tamanho) {
    int i, k;
    for (i = 0; i <= tamanho - 1; i += 1) {
        for (k = i + 1; k <= tamanho - 1; k += 1) {
            if (lista[i] > lista[k]) {
                int a = lista[k];
                lista[k] = lista[i];
                lista[i] = a;
            }
        }
    }

    return lista;
}

double *cosenos (double lista[], int tamanho) {
    int i;
    for (i = 0; i <= tamanho; i += 1) {
        lista[i] = cos(lista[i]);
    }

    return lista;
}

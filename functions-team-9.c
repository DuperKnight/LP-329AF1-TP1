#include <stdio.h>
#include "functions-team-9.h"

int *ordenar (int lista[]) {
    int i, k;
    for (i = 0; i <= 11; i += 1) {
        for (k = i + 1; k <= 11; k += 1) {
            if (lista[i] > lista[k]) {
                int a = lista[k];
                lista[k] = lista[i];
                lista[i] = a;
            }
        }
    }

    return lista;
}

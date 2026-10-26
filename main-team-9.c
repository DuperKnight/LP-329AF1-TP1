#include <stdio.h>
#include "functions-team-9.h"

int main () {
    int i=1, k;
    int vetor[12];

    while (i <= 12) {
        printf("Insira o número %d: ", i);
        scanf("%d", &k);

        if (k > 26 || k <2) {
            printf("O número precisa ser entre 2 e 26.\n");
        } else {
            vetor[i-1] = k;
            i += 1;
        }
    }

    return 0;
}

#include <stdio.h>
#include "functions-team-9.h"

int main () {
    int k=1, j;

    while (k <= 12) {
        printf("Insira o número %d: ", k);
        scanf("%d", &j);

        if (j > 26 || j <2) {
            printf("O número precisa ser entre 2 e 26.\n");
        } else {
            k += 1;
        }
    }

    return 0;
}

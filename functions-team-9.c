#include <stdio.h>
#include <math.h>
#include "functions-team-9.h"

// Função para ler e validar o vetor
int *ler_vetor (int vetor[12]) {
    int elemento;

    printf("Digite 12 números inteiros entre 2 e 26\n");
    for (int i = 0; i <= 11; i++) {
        printf("Digite o %dº elemento do vetor: ", i + 1);
        do {
            scanf("%d", &elemento);
        } while (elemento < 2 || elemento > 26);

        vetor[i] = elemento;
    }

    return vetor;
}

// Função

// Função para somar todos os valores do vetor

int somar_vetor (int vetor[12]) {
    int soma = 0;

    for (int i = 0; i <= 11; i++) {
        soma += vetor[i];
    }

    return soma;
}

// Função

// Função

// Função para identificar o valor mais próximo de 25

// Função para devolver os valores do vetor divisíveis por três

/*int soma (int lista[], int tamanho) {
    int i, soma = 0;
    for (i = 0; i <= tamanho - 1; i += 1) {
        soma += lista[i];
    }

    return soma;
}

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
}*/

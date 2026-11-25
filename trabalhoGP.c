#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "TrabalhoGP.h"


void OP1 (int original[12])
{
    int i;
    int simetrico[12];
    for (i = 0; i < 12; i++)
    {
        simetrico[i] = -1 * original[i];
    }
    // Ordenar o vetor simétrico por ordem crescente
    for (i = 0; i < 12 - 1; i++)
    {
        for (int j = 0; j < 12 - i - 1; j++)
        {
            if (simetrico[j] > simetrico[j + 1])
            {
                int aux = simetrico[j];
                simetrico[j] = simetrico[j + 1];
                simetrico[j + 1] = aux;
            }
        }
    }
    printf("Vetor simétrico ordenado: \n");
    for (i = 0; i < 12; i++)
    {
        printf("%i, ", simetrico[i]);
    }
    printf("\n");

}

void OP2 (int original[12])
{
    int i;
    int sum = 0;
        for (i = 0; i < 12; i++)
         {
            sum += original[i];
         }
        printf("Soma dos números inseridos: %d\n", sum);
}

void OP3 (int original[12])
{
    int i;
     //Função 3
    float coseno[6];
        for (i = 6; i < 12; i++) 
        {
            coseno[i - 6] = cos(original[i]);
        }
        printf("Coseno dos valores da segunda metade do vetor: ");
        for (i = 0; i < 6; i++) 
        {
        printf("cos(%d) = %f, ",original[i], coseno[i]);
        }
        printf("\n");
}

void OP4 (int original[12])
{
    int k;
    int i;
    printf("matriz 12 por 12, em que cada linha é composta pelo vetor lido (primeira linha) e por permutações dos seus valores: \n");
    for (k = 0, i = 0; i < 11; i++, k++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("%i, ", original[(j + k) % 12]);
        }
        printf("\n");
    }
}

void OP5 (int original[12])
{
    int i;
    int prox = 0;
            for (i = 0; i < 12; i++)
            {
                if (25 - original[i] < 25 - prox)
                {
                    prox = original[i];
                }
            }
            printf("O valor no vetor mais próximo de 25 é: %i", prox);
}

void OP6 (int original[12])
{
     //Função 6
     int i;
    printf("Os valores divisíveis por 3 no vetor são: ");
    for (i = 0; i < 12; i++)
    {
        if (original[i] % 3 == 0)
        {
            printf ("%i, ", original[i]);
        }
    }
}

void OPH (void)
{
    //Função 7
        //Menu de ajuda
        int sair = 1;
        do
        {

        }while(sair == 1);
}

void OP21(int original[12])
{
     //Função 8
        int i;
        int Novo[12];
        printf("Insira 12 números de 2 a 26 incluindo: \n");
        //Pede números de 2 a 26 ao utilizador e continua a pedir até um valor válido ser inserido
        for (i = 0; i < 12; i++)
        {
            do
            {
            scanf("%i", &Novo[i]); 
            }while(Novo[i] < 2 || Novo[i] > 26);
        }
        int comb[12];
        for (i = 0; i < 6; i++)
        {
            comb[i] = original[i];
            comb[i + 6] = Novo[i + 6];
        }
        printf("Vetor novo combinando a priemira metade do primeiro vetor lido, e a segunda metado do segundo vetor lido: ");
        for (i = 0; i < 12; i++)
        {
            printf("%i, ", Novo[i]);
        }
        printf ("\n");
}

void OP22(int original[12])
{
    //Função 9
    //Para sabermos se algum número num intervalo (por exemplo de 2 a 26) é primo só precisamos de testar com números de 2 a raiz de 26
    int i;
    int primo = 0;
    int igual = 0;
    for (i = 0; i < 12; i++)
    {
        for (int j = 2; j <= 5; j++)
        {
            if (original[i] == j)
            {
                    igual = 1;
            }
            else if (original[i] != j)
            {
                if (original[i] % j != 0)
                { 
                    primo = primo + 1;
                }
            }
        }
        printf("Númeors primos que se encontram no vetor: ");
        if (igual == 0)
        {
            if (primo == 4)
            {
                printf( "%i, ", original[i]);
            }
        }
        else
        {
            if (primo == 3)
            {
                printf("%i, ", original[i]);
            }
        }
        primo = 0;
        igual = 0;
    }

}

int matrizG[12][12];

void OP23 (int original[12])
{

    //Função 10
    int i;
    int Novo[12];
    printf("Insira 12 números de 2 a 26 incluindo: \n");
    //Pede números de 2 a 26 ao utilizador e continua a pedir até um valor válido ser inserido
    for (i = 0; i < 12; i++)
    {
        do
        {
        scanf("%i", &Novo[i]); 
        }while(Novo[i] < 2 || Novo[i] > 26);
    }
    int matriz[12][12];
    printf("Matriz 12x12 resultante do produto do vetor inicial com o novo vetor gerado: \n");
    for (i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            matriz[i][j] = original[i] * Novo[j];
            matrizG[i][j] = matriz[i][j];
            printf("%i,  ", matriz[i][j]);
        }
        printf("\n");
    }
}

void OP24 (int original[12])
{
    int i;
    //Função 4 avançada
    //Transpor a matriz global que provem da função 3 avançada
    int matrizT[12][12];
    printf("Cálculo e apresentação da matriz transposta referida no ponto anterior: \n");
    for (i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            matrizT[i][j]= matrizG[j][i];
            printf("%i, ", matrizT[i][j]);
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "trabalhoGP.h"


void HelpMenu (void)
{
    printf("\n=====================================================================\n");
    printf("                      MENU DE AJUDA - \"trabalho\"                     \n");
    printf("=====================================================================\n\n");

    printf("1. UTILIZAÇÃO NA LINHA DE COMANDOS\n");
    printf("   ./trabalho --help       Exibe este menu de ajuda detalhado e termina.\n");
    printf("   ./trabalho              Inicia o programa interativo com os menus.\n\n");

    printf("2. ENTRADA DE DADOS INICIAL\n");
    printf("   - Ao iniciar sem \"--help\", o programa pede 12 números inteiros.\n");
    printf("   - Cada valor tem de pertencer ao intervalo fechado [2, 26]\n");
    printf("     (ou seja, de 2 a 26, inclusive). Valores fora desse intervalo\n");
    printf("     são ignorados/rejeitados até ser inserido um número válido.\n");
    printf("   - Após cada funcionalidade executada, introduz \"0\" quando pedido\n");
    printf("     para regressar ao menu correspondente.\n\n");

    printf("3. MENU BÁSICO (estado inicial)\n");
    printf("   0. Sair do programa\n");
    printf("      Termina a execução imediatamente.\n\n");
    printf("   1. Ordenação pelos valores simétricos\n");
    printf("      Calcula o simétrico (-x) de cada um dos 12 elementos do vetor\n");
    printf("      inicial e apresenta-os ordenados por ordem crescente.\n\n");
    printf("   2. Soma dos elementos\n");
    printf("      Soma todos os 12 números do vetor inicial e mostra o total.\n\n");
    printf("   3. Cosseno da segunda metade do vetor\n");
    printf("      Calcula cos(x) para os elementos da segunda metade do vetor\n");
    printf("      (índices 6 a 11, sendo o argumento tratado em radianos).\n\n");
    printf("   4. Matriz 12x12 por permutações\n");
    printf("      Gera linhas baseadas no vetor inicial e em deslocamentos/\n");
    printf("      permutações circulares dos seus elementos.\n\n");
    printf("   5. Valor mais próximo de 25\n");
    printf("      Analisa o vetor e indica o valor mais próximo de 25.\n\n");
    printf("   6. Múltiplos / divisíveis por 3\n");
    printf("      Lista os valores do vetor inicial que são divisíveis por 3\n");
    printf("      (resto da divisão inteira igual a 0), ou indica se não existe nenhum.\n\n");
    printf("   7. Ajuda no menu\n");
    printf("      Abre a informação de ajuda dentro do programa.\n\n");
    printf("  10. Avançar para o menu de funções avançadas\n");
    printf("      Muda do menu básico para o menu avançado.\n\n");

    printf("4. MENU AVANÇADO\n");
    printf("   0. Voltar ao menu básico\n");
    printf("      Regressa ao menu principal de funções básicas.\n\n");
    printf("   1. Combinação de dois vetores (primeira e segunda metade)\n");
    printf("      Pede um novo vetor de 12 números (entre 2 e 26) e cria um\n");
    printf("      vetor resultante com a primeira metade (6 elementos) do vetor\n");
    printf("      inicial e a segunda metade (6 elementos) do novo vetor.\n\n");
    printf("   2. Números primos no vetor inicial\n");
    printf("      Identifica e apresenta os números primos presentes no vetor\n");
    printf("      inicial (para valores entre 2 e 26).\n\n");
    printf("   3. Produto vetorial -> matriz 12x12\n");
    printf("      Lê um novo vetor 1x12 com valores entre 2 e 26 e calcula a\n");
    printf("      matriz 12x12 resultante do produto entre o vetor inicial e\n");
    printf("      esse novo vetor, guardando-a para operações seguintes.\n\n");
    printf("   4. Matriz transposta da opção 3\n");
    printf("      Calcula e apresenta a transposta da matriz 12x12 gerada na\n");
    printf("      opção 3 deste menu. IMPORTANTE: exige executar primeiro a\n");
    printf("      opção 3; caso contrário, o programa avisa e bloqueia o acesso.\n\n");

    printf("5. NOTAS IMPORTANTES\n");
    printf("   - Na compilação com \"gcc\"/\"cc\", lembra-te de incluir a biblioteca\n");
    printf("     matemática (\"-lm\") caso uses funções de <math.h> como \"cos\".\n");
    printf("   - Os vetores esperam exatamente 12 valores inteiros no intervalo [2, 26].\n");
    printf("=====================================================================\n");
}
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
        printf("Cosseno dos valores da segunda metade do vetor: ");
        for (i = 0; i < 6; i++) 
        {
        printf("cos(%d) = %f, ",original[i + 6], coseno[i]);
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
    int algum = 0;
    for (i = 0; i < 12; i++)
    {   
        if (original[i] % 3 == 0)
        {
            algum = 1;
            printf ("%i, ", original[i]);
        }
    }
            if(algum != 1)
        {
            printf("Nenhum!");
        }
}

void OPH (void)
{
    //Função 7
    //Menu de ajuda
    printf("\n==================== MENU DE AJUDA ====================\n");
    printf("Utilizacao na linha de comandos:\n");
    printf("  ./trabalho --help       Mostra esta ajuda e termina.\n");
    printf("  ./trabalho              Inicia o programa (pede 12 números entre 2 e 26).\n\n");

    printf("Menu Básico:\n");
    printf("  0. Sair do programa.\n");
    printf("  1. Ordena o vetor pelos valores simetricos (-x) por ordem crescente.\n");
    printf("  2. Calcula a soma de todos os 12 elementos do vetor.\n");
    printf("  3. Calcula o cosseno (em radianos) da segunda metade do vetor (indices 6 a 11).\n");
    printf("  4. Gera uma matriz 12x12 com o vetor inicial e permutacoes dos seus valores.\n");
    printf("  5. Encontra o elemento do vetor mais próximo de 25.\n");
    printf("  6. Mostra os elementos do vetor que são divisíveis por 3.\n");
    printf("  7. Abre este menu de ajuda.\n");
    printf(" 10. Avança para o menu de funcões avançadas.\n\n");

    printf("Menu Avançado:\n");
    printf("  0. Volta ao menu básico.\n");
    printf("  1. Lê um segundo vetor (2..26) e mistura 1.a metade do 1.o com 2.a metade do 2.o.\n");
    printf("  2. Identifica os números primos presentes no vetor inicial.\n");
    printf("  3. Le um vetor 1x12 (2..26) e calcula a matriz 12x12 do produto.\n");
    printf("  4. Calcula a transposta da matriz gerada na opção 3 (requer executar a 3 primeiro).\n");
    printf("=========================================================\n");
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
        printf("Vetor novo combinando a primeira metade do primeiro vetor lido, e a segunda metade do segundo vetor lido: ");
        for (i = 0; i < 12; i++)
        {
            printf("%i, ", comb[i]);
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
    printf("Números primos que se encontram no vetor: ");
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
    //Transpor a matriz global que provém da função 3 avançada
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

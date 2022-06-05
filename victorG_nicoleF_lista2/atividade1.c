/*
CEFET-MG ||| INFO-2 ||| dd/MM/2022
Alunos: Victor Gabriel e Nicole Ferreira

Lista 2 de LLTP1 - Atividade 1
Resumo do Código:
    Através de ponteiros:
        - Armazena e imprime valores num vetor de ponteiro.
*/

#include <stdio.h>

#define TAMANHO 5

int main()
{

    int var1[TAMANHO];
    int *pVar1 = var1;

    for (int i = 0; i < TAMANHO; i++){
        pVar1[i] = &var1[i];
    }

    printf("\n"); //Pula uma linha
    

    return 0;
}
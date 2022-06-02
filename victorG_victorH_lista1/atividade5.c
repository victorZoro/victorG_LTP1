/*
CEFET-MG ||| INFO-2 ||| dd/MM/2022
Alunos: Victor Gabriel e Victor Hugo

Lista 1 de LLTP1 - Atividade 5
Resumo do Código:
    Através de ponteiros:
        - Faz cálculos matemáticos básicos com variáveis do tipo ponteiro de int. (Victor Gabriel)
*/

#include <stdio.h>

int main(){

    int var1, var2, res[4]; //Cria variáveis do tipo integer
    int *pVar1 = &var1, *pVar2 = &var2; //Cria ponteiros para as variáveis do tipo integer

    scanf("%d", pVar1); scanf("%d", pVar2);

    /* Operações Matemáticas */

    res[0] = *pVar1 + *pVar2; //Soma
    res[1] = *pVar1 - *pVar2; //Subtração
    res[2] = *pVar1 * *pVar2; //Multiplicação
    res[3] = *pVar1 / *pVar2; //Divisão

    /* Impressão */

    printf("Soma: %d\n", res[0]);
    printf("Subtracao: %d\n", res[1]);
    printf("Multiplicacao: %d\n", res[2]);
    printf("Divisao: %d\n", res[3]);

    printf("\n"); //Pula linha

    return 0;
}
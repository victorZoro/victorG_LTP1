/*
CEFET-MG ||| INFO-2 ||| dd/MM/2022
Alunos: Victor Gabriel e Victor Hugo

Lista 1 de LLTP1 - Atividade 1
Resumo do Código:
    Através de ponteiros:
        - Imprime o endereço das variáveis do tipo float. (Victor Gabriel)
        - Imprime o endereço das variáveis do tipo ponteiro de float. (Victor Hugo)
*/

#include <stdio.h>

int main(){

    float var1, var2; //Cria variáveis do tipo float
    float *pVar1 = &var1, *pVar2 = &var2; //Cria ponteiros para as variáveis do tipo float

    /* Endereços das variáveis do tipo float */
    printf("Endereco de var1: %p\n", pVar1);
    printf("Endereco de var2: %p\n", pVar2);\

    printf("\n"); //Pula linha

    /* Endereços das variáveis do tipo ponteiro de float */
    printf("Endereco de pVar1: %p\n", &pVar1);
    printf("Endereco de pVar2: %p\n", &pVar2);

    printf("\n"); //Pula linha

    return 0;
}
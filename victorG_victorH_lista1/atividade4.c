/*
CEFET-MG ||| INFO-2 ||| dd/MM/2022
Alunos: Victor Gabriel e Victor Hugo

Lista 1 de LLTP1 - Atividade 4
Resumo do Código:
    Através de ponteiros:
        - Imprime o valor e endereço da variável do tipo integer. (Victor Gabriel)
        - Imprime o ponteiro e conteúdo da variável do tipo integer. (Victor Hugo)
        - Muda o valor para 7 e imprime o valor e conteúdo das variáveis int e ponteiro de int. (Victor Gabriel)
        - Muda o valor para 13 e repete o passo anterior. (Victor Hugo)
*/

#include <stdio.h>

int main(){

    int var1 = 5; //Cria uma variável do tipo int
    int *pVar1 = &var1; //Cria um ponteiro para a variável do tipo int

    /* Variável do tipo int */
    printf("Valor de var1: %d\n", var1);
    printf("Endereco de var1: %p\n", pVar1);

    printf("\n"); //Pula linha

    /* Variável do tipo ponteiro de int */
    printf("Ponteiro de var1: %d\n", pVar1);
    printf("Conteudo de pVar1: %d\n", *pVar1);

    printf("\n"); //Pula linha

    /* Mudança de Valor (5 para 7) */
    *pVar1 = 7; //Muda o valor de var1
    printf("Novo valor de var1: %d\n", var1);
    printf("Novo conteudo de pVar1: %d\n", *pVar1);
    
    printf("\n"); //Pula linha

    /* Mudança de Valor (7 para 13) */
    *pVar1 = 13; //Muda o valor de var1
    printf("Novo valor de var1: %d\n", var1);
    printf("Novo conteudo de pVar1: %d\n", *pVar1);
    
    printf("\n"); //Pula linha


    return 0;
}
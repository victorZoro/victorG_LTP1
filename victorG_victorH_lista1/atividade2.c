/*
CEFET-MG ||| INFO-2 ||| dd/MM/2022
Alunos: Victor Gabriel e Victor Hugo

Lista 1 de LLTP1 - Atividade 2
Resumo do Código:
    Através de ponteiros:
        - Atribui ao ponteiro, o endereço da variável do tipo integer. (Victor Gabriel)
        - Imprime o conteúdo da variável do tipo integer. (Victor Hugo)
*/

#include <stdio.h>

int main(){

    int var1 = 10; //Cria uma variável do tipo int
    int *pVar1 = &var1; //Cria um ponteiro para a variável do tipo int

    /* Endereços das variáveis do tipo float */
    printf("Conteudo de pVar1: %d\n", *pVar1);

    printf("\n"); //Pula linha

    return 0;
}
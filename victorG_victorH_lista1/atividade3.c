/*
CEFET-MG ||| INFO-2 ||| dd/MM/2022
Alunos: Victor Gabriel e Victor Hugo

Lista 1 de LLTP1 - Atividade 3
Resumo do Código:
    Através de ponteiros:
        - Imprime o valor e endereço de uma variável do tipo char. (Victor Gabriel)
        - Imprime o ponteiro da variável do tipo char e o endereço do ponteiro (Victor Hugo)
*/

#include <stdio.h>

int main(){

    char var1 = 'a'; //Cria uma variável do tipo char
    char *pVar1 = &var1; //Cria um ponteiro para a variável do tipo char

    /* Variável do Tipo Char */
    printf("Valor de var1: %c\n", *pVar1);
    printf("Endereco de var1: %p\n", pVar1);

    printf("\n"); //Pula linha
   
    /* Variável do Tipo Ponteiro de Char */
    printf("Conteudo de pVar1: %c\n", *pVar1);
    printf("Endereco de pVar1: %p\n", &pVar1);

    printf("\n"); //Pula linha

    return 0;
}
/*
CEFET-MG ||| INFO-2 ||| 12/06/2022
Alunos: Victor Gabriel

Lista 4 de LLTP1 - Atividade 2.2
Resumo do Código:
    - Cria um header file (arquivo-cabeçalho).
    - Cria uma função que imprime se o número é divisível por outro.
    - Cria uma função que imprime se o número é ou não divisível baseado no retorno de ehdivisivel.
*/

#ifndef EHDIVISIVEL_H_INCLUDED
#define EHDIVISIVEL_H_INCLUDED

#include <stdio.h> //Inclui biblioteca stdio.h

/* Função ehdivisivel
    - Confere se A é divisível por B.
*/
int ehdivisivel(int a, int b){

    /* Estrutura Condicional 1
        - Confere se A é divisível por B
        Sim: Retorna 1
        Não: Retorna 0
    */
    if(a%b == 0){ return 1; }else{ return 0; }
}

/* Função printidivisivel
    - Confere o retorno de ehdivisivel.
    - Caso 1: Imprime que A é divisível por B.
    - Caso 0: Imprime que A não é divisível por B.
*/
void printdivisivel(int a, int b){
    
    /* Estrutura Condicional 2
        - Caso ehdivisivel retorne 1, o número é divisível.
        - Caso ehdivisivel retorne 0, há resto, portanto, o número não é divisível.
    */
    if(ehdivisivel(a,b) == 1){
        printf("%d eh divisivel por %d",a,b);
    }else{
        printf("%d nao eh divisivel por %d",a,b);
    }
}

#endif // EHDIVISIVEL_H_INCLUDED

/*
CEFET-MG ||| INFO-2 ||| dd/MM/2022
Alunos: Victor Gabriel e Victor Hugo

Lista 1 de LLTP1 - Atividade 2
Resumo do Código:
    Através de ponteiros:
        - Lê três inteiros e os coloca em ordem crescente. (Victor Hugo)
*/

#include <stdio.h>

int main(){

    int var1, var2, var3, aux; //Cria variáveis do tipo integer
    int *pVar1 = &var1, *pVar2 = &var2, *pVar3 = &var3; //Cria ponteiros para as variáveis do tipo integer

    scanf("%d %d %d", pVar1, pVar2, pVar3);

    if(*pVar1 > *pVar3){
        aux = *pVar1;
        *pVar1 = *pVar3;
        *pVar3 = aux;
    }

    if(*pVar1 > *pVar2){
        aux = *pVar1;
        *pVar1 = *pVar2;
        *pVar2 = aux;
    }
    
    if(*pVar2 > *pVar3){
        aux = *pVar2;
        *pVar2 = *pVar3;
        *pVar3 = aux;
    }

    printf("\n--- Ordem dos Numeros ---\n");
    printf("%d, %d, %d\n", *pVar1, *pVar2, *pVar3);

    printf("\n"); //Pula linha

    return 0;
}
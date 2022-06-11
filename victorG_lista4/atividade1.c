/*
CEFET-MG ||| INFO-2 ||| 12/06/2022
Alunos: Victor Gabriel

Lista 4 de LLTP1 - Atividade 1
Resumo do Código:
    - Cria uma função para checar se um número é divisível por outro.
        (Caso sim: retorna 1. Caso não: retorna 0)
    - Lê dois números e, através da função, retorna se o número é divisível ou não.
*/

#include <stdio.h>

int ehdivisivel(int a, int b){ //Função ehdivisivel
    /* Estrutura Condicional 1
        - Confere se A é divisível por B
        Sim: Retorna 1
        Não: Retorna 0
    */
    if(a%b == 0){ return 1; }else{ return 0; }
}

int main(){ //Função main

    int num1, num2; //Declara variáveis

    scanf("%d %d",&num1,&num2); //Lê os números

    /* Estrutura Condicional 2
        - Caso ehdivisivel retorne 1, o número é divisível.
        - Caso ehdivisivel retorne 0, há resto, portanto, o número não é divisível.
    */
    if(ehdivisivel(num1,num2) == 1){
        printf("%d eh divisivel por %d\n.",num1,num2);
    }else{
        printf("%d nao eh divisivel por %d\n",num1,num2);
    }

    return 0;
}
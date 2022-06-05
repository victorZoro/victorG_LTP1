/*
CEFET-MG ||| INFO-2 ||| 05/06/2022
Alunos: Victor Gabriel

Lista 3 de LLTP1 - Atividade 1
Resumo do Código:
    - Função retorna o maior número.
    - Lê dois numeros e imprime o maior.
*/
#include <stdio.h>

int maiornumero(int a, int b){ //Função que testa o maior numero
    if (a>b){
        return a; //Retorna o valor de A
    }else{
        return b; //Retorna o valor de B
    }
}

int main(){ //Função main

    int num1, num2; //Declara variáveis

    printf("Digite dois numeros: "); scanf("%d %d", &num1,&num2); //Lê os números

    printf("O maior numero eh: %d", maiornumero(num1,num2)); //Imprime o maior número

    return 0;
}
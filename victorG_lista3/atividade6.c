/*
CEFET-MG ||| INFO-2 ||| 05/06/2022
Alunos: Victor Gabriel

Lista 3 de LLTP1 - Atividade 6
Resumo do Código:
    - Define o dobro de um número com uma função
    - Define a soma de dois números com uma função
    - Define o triplo de um número com um uma função
    - Lê e imprime o dobro de dois números
    - Soma os dois números
    - Imprime o triplo da soma dos números
*/
#include <stdio.h>

int dobro(int a){ //Função que dobra o número
    return (a*2); //Retorna o dobro do número
}

int soma(int a, int b){ //Função que soma os números
    return (a+b); //Retorna a soma
}

int triplo(int a){ //Função que triplica o número
    return (a*3); //Retorna o triplo do número
}

int main(){
    int num1, num2; //Declara variáveis

    printf("Digite dois numeros\n"); scanf("%d %d", &num1,&num2); //Lê dois números

    num1 = dobro(num1); num2 = dobro(num2); //Dobra os números
    
    printf("O dobro dos numeros: %d e %d\n", num1,num2);

    int soma; //Declara a variável soma

    soma = num1+num2; //Soma os números

    printf("A soma dos novos numeros: %d", soma);

    soma = triplo(soma); //Triplica a soma dos números

    printf("O triplo da soma: %d", soma);
}
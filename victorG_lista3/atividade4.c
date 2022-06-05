/*
CEFET-MG ||| INFO-2 ||| 05/06/2022
Alunos: Victor Gabriel

Lista 3 de LLTP1 - Atividade 4
Resumo do Código:
    - Calcula o módulo de um número com uma função
    - Imprime a soma dos módulos de dois números
*/
#include <stdio.h>

int modulo(int num){ //Função que calcula o módulo do número
    if(num<0){
        num = num*(-1); //Transforma um número negativo em positivo
    }
    return num; //Retorna o módulo
}

int main(){ //Função main
    int num1, num2; //Declara as variáveis

    printf("Digite dois numeros: "); scanf("%d %d",&num1,&num2); //Lê os dois números

    printf("A soma dos modulos dos numeros eh: %d\n", modulo(num1)+modulo(num2)); //Imprime a soma dos módulos

    return 0;
}
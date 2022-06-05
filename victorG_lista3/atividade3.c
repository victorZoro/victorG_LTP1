/*
CEFET-MG ||| INFO-2 ||| 05/06/2022
Alunos: Victor Gabriel

Lista 3 de LLTP1 - Atividade 3
Resumo do Código:
    - Converte graus celsius em fahrenheit através de uma função.
    - Lê uma temperatura em celsius e imprime sua conversão para fahrenheit.
*/
#include <stdio.h>

float conversao(float c){ //Função que converte Celsius para Fahrenheit.
    float f = (c*1.8)+32; //Fórmula
    return f; //Retorna o valor de f
}

int main(){ // Função main

    float temp; //Declara variável

    printf("Qual a temperatura a ser convertida? "); scanf("%f", &temp); //Lê a temperatura em Celsius

    printf("A temperatura %.2fºC equivale a %.2fºF\n",temp,conversao(temp)); //Imprime a temperatura já convertida.

    return 0;
}
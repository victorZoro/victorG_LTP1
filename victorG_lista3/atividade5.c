/*
CEFET-MG ||| INFO-2 ||| 05/06/2022
Alunos: Victor Gabriel

Lista 3 de LLTP1 - Atividade 5
Resumo do Código:
    - Define o Peso 2 como o dobro da nota por uma função
    - Define a média como a soma das 3 notas divida por 3 através de função
    - Imprime a média das notas
*/
#include <stdio.h>

float peso2(float a){ //Função que define peso 2
    return (a*2); //Retorna o valor de nota*2
}

float media(float a, float b, float c){ //Função que define a média
    float media = (a+b+c)/3;
    return media; //Retorna o valor de média
}

int main(){ //Função main
    
    float ava1,ava2,ava3; //Declara variáveis

    printf("\n -- Notas -- \n"); scanf("%f %f %f",&ava1,&ava2,&ava3); //Lê as notas

    ava2 = peso2(ava2); ava3 = peso2(ava3); //Transforma a segunda e terceira avaliação em peso 2

    printf("A media das notas avaliadas eh %.2f\n", media(ava1,ava2,ava3)); //Imprime a média das notas

    return 0;
}
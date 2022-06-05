/*
CEFET-MG ||| INFO-2 ||| 05/06/2022
Alunos: Victor Gabriel

Lista 3 de LLTP1 - Atividade 2
Resumo do Código:
    - Calcula a área do retangulo em uma função.
    - Compara a área de dois retangulos para saber qual a maior.
*/
#include <stdio.h>

int arearetangulo(int b, int h){ //Função que calcula a área do retangulo
    int area = b*h;
    return area; //Retorna a área do retangulo
}

int main(){ //Função main

    /* Declaração de Variáveis
    - São usados vetores para minimizar a quantidade de variáveis */
    int base[2], altura[2];

    //Lê as dimensões dos retângulos
    printf("Dimensoes do retangulo A: "); scanf("%d %d",&base[0],&altura[0]);
    printf("Dimensoes do retangulo B: "); scanf("%d %d",&base[1],&altura[1]);

    printf("\n"); //Pula uma linha

    //Imprime as áreas dos retângulos
    printf("Area do retangulo A: %dcm²\n\n", arearetangulo(base[0],altura[0]));
    printf("Area do retangulo B: %dcm²\n\n", arearetangulo(base[1],altura[1]));

    /* Condições
    - Testa qual retângulo tem a maior área ou se são identicos. */
    if(arearetangulo(base[0],altura[0]) == arearetangulo(base[1],altura[1])){
        printf("Os dois retangulos sao iguais.\n");
    }else if(arearetangulo(base[0],altura[0]) > arearetangulo(base[1],altura[1])){
        printf("O retangulo A eh maior.\n");
    }else{
        printf("O retangulo B eh maior.\n");
    }

    return 0;
}
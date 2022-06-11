/*
CEFET-MG ||| INFO-2 ||| 12/06/2022
Alunos: Victor Gabriel

Lista 4 de LLTP1 - Atividade 4
Resumo do Código:
    - Cria uma função para zerar dois números utilizando passagem por parâmetro de referência.
    - Lê dois números.
    - Zera e imprime seus valores.
*/

#include <stdio.h>

/* Função Zerar
    - Cria dois ponteiros de a e b e zera seus conteúdos
*/
void zerar(int *a, int *b){
    *a = *b = 0;
}

int main(){ //Função main

    int a, b; //Declara variáveis

    printf("Digite dois inteiros: \n"); scanf("%d %d",&a,&b); //Lê A e B

    printf("Numeros digitados: %d e %d\n",a,b); //Imprime A e B

    zerar(&a,&b); //Zera A e B utilizando seus endereços

    printf("Novos numeros: %d e %d\n",a,b); //Imprime os valores zerados

    return 0;   
}
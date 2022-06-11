/*
CEFET-MG ||| INFO-2 ||| 12/06/2022
Alunos: Victor Gabriel

Lista 4 de LLTP1 - Atividade 3
    - Dar as saídas do código.
*/

#include <stdio.h>
int num;
int func(int a, int b){

    a = (a+b)/2;
    num -= a;
    return a;
}

int main(){

    int first = 0, sec = 50;

    num = 10;

    num += func(first,sec);

    printf("\n\nConfira! num = %d\tfirst = %d\tsec = %d",num,first,sec);

    return 0;
}

// As saídas do código acima são "num = 10, first = 0, sec = 50"
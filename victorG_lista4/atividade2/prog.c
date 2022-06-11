/*
CEFET-MG ||| INFO-2 ||| 12/06/2022
Alunos: Victor Gabriel

Lista 4 de LLTP1 - Atividade 2.3
Resumo do Código:
    - Importa um header file com funções
    - Imprime se um número é divisível  por outro
*/

#include <stdio.h>
#include "ehdivisivel.h" //Importa o header file "ehdivisivel.h"

int main(){

    int num1, num2; //Declara variáveis

    scanf("%d %d", &num1,&num2); //Lê variáveis

    printdivisivel(num1,num2); //Imprime se num1 é divisível por num2 de acordo com as funções do header file.

    return 0;
}
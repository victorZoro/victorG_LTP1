#include <stdio.h>
#include <string.h>

int main(){

    char frase[50];
    char *ptfrase = frase;

    printf("Digite uma frase:\n"); gets(ptfrase);

    int tamanho = strlen(ptfrase);

    printf("Quantidade de caracteres: %d\n",tamanho);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){

    char frase[50];
    char *ptfrase = frase;

    printf("Digite uma frase:\n"); gets(ptfrase);

    int cont = 1;

    for (int i = 0; *ptfrase != '\0'; i++){
        if(*ptfrase == 32){
            cont++;
        }
        ptfrase++;
    }

    printf("Quantidade de palavras: %d\n", cont);
    
    return 0;
}
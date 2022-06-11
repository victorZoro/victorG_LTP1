#include <stdio.h>
#include <stdlib.h>

#define tam 4

int main(){

    int vetor[tam], maior, menor = 0;
    int *pt_var = vetor;

    printf("Digite quatro numeros:\n");

    for (int i = 0; i < tam; i++){
        scanf("%d", pt_var);
        printf("\nNumero %d: %d\n", i, *pt_var);

        if(*pt_var > maior){
            maior = *pt_var;
        }else if(*pt_var < menor){
            menor = *pt_var;
        }

        pt_var++;
    }
    
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    
    return 0;
}
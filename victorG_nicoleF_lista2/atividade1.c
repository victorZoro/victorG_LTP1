#include <stdio.h>

#define tam 6

int main(){

    int vetor[tam];
    int *pVetor = vetor;

    for (int i = 0; i < tam; i++){
        printf("Digite um valor:\n");
        scanf("%d", pVetor);

        printf("\n\n --- Posição %d ---\n", i);

        printf("Valor da Posicao pvetor[%d]: %d\n", i, *pVetor);

        printf("Endereco da Posicao pvetor[%d]: %p\n", i, &pVetor);

        printf("\n");

        pVetor++;
    }

    return 0;
}
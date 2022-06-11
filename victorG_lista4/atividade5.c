/*
CEFET-MG ||| INFO-2 ||| 12/06/2022
Alunos: Victor Gabriel

Lista 4 de LLTP1 - Atividade 5
Resumo do Código:
    Utilizando vetores como argumentos de funções:
        - Cria uma função para ler um vetor.
        - Lê o vetor1
        - Imprime seus valores
*/

#include <stdio.h>
#define tam 10 //Define uma constante tamanho = 10

/* Função lerVetor
    - Utiliza um ponteiro para fazer a leitura de um vetor com aritmética de ponteiros.
*/
void lerVetor(int *vet, int dimensao){
    printf("Digite os valores do vetor:\n"); //Pede input do usuário

    for (int i = 0; i < dimensao; i++){ // Estrutura de repetição
        scanf("%d", (vet+i)); //Lê o vetor independentemente de seu tamanho através de um ponteiro.
    }
}

int main(){ //Função main

    int vet[tam]; //Declara variável vetor

    /*Chama a função ler vetor com os parâmetros: 
        - vet (como *vet)
        - tam (como dimensao).
    */
    lerVetor(vet, tam); 

    //Imprime os números
    printf("\n\n -- Numeros Lidos -- \n\n"); 
    for (int i = 0; i < tam; i++){
        printf("Posicao %d: %d\n", i, vet[i]);
    }

    return 0;
}
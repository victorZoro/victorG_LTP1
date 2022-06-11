#include <stdio.h>
#include <string.h>

int main(){

    char frase[60];
    char *ptfrase = frase;

    printf("Digite uma frase:\n"); gets(ptfrase);

    printf("%s", *ptfrase);

    // for (int i = 0; i <= 60; i++){
    //     if (*ptfrase != 32){¨
    //         printf("%c", *ptfrase);
    //     }else{
    //         printf("\n");
    //     }
    // }
    
    return 0;
} 
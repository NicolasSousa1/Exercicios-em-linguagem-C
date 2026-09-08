/* Programa para verificar se uma palavra é um palíndromo
    Nicolas de Sousa
    08/09/26
*/

#include <stdio.h>

void verificar(char *);

main(){

    char palavra[40];

    for(short int i = 0; i < 40; i++){

        palavra[i] = '\0';

    }

    printf("Digite uma frase: ");
    fgets(palavra, 40, stdin);

    verificar(palavra);

}

void verificar(char *palavra){

    char palindromo[40];
    short int j = 0;
    short int tamanho = 0;

    while(palavra[tamanho] != '\0' && palavra[tamanho] != '\n'){
        tamanho++;
    }

    for(short int i = tamanho - 1; i >= 0; i--){
        palindromo[j] = palavra[i];
        j++;
    }

    for(short int i = 0; i < tamanho; i++){
        if(palavra[i] != palindromo[i]){
            printf("A frase nao e um palindromo");
            return;
        }
    }

    printf("A frase e um palindromo");
}
/* Programa de criptografia
    Nicolas de Sousa
    08/09/26
*/

#include <stdio.h>

void merge(char *, char *);

int main(){

    char nome[30];
    char vet[25];

    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);

    printf("Digite seu cpf e rg: ");
    fgets(vet, 25, stdin);

    merge(nome, vet);

    return 0;
}

void merge(char *nome, char *vet){

    char crypto[55];
    int k = 0;

    for(int i = 0; i < 55; i++){
        crypto[i] = '\0';
    }

    for(int i = 0; i < 30; i++){

        crypto[k] = nome[i];
        k++;

        crypto[k] = vet[i];
        k++;
    }

    for(int i = 0; i < k; i++){

        if(crypto[i] == '\0'){
            break;
        }
        printf("%c", crypto[i]);
    }
}
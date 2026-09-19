/*
    determinar conjunto maior.c
    Nicolas de Sousa
    19/09/2026
    programa para mostrar qual conjunto da matriz tem a maior soma*/

#include <stdio.h>

void determinarMaiorConjunto(int mat[][5]);

int main(){

    int matriz[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Digite o valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    determinarMaiorConjunto(matriz);

    return 0;
}

void determinarMaiorConjunto(int mat[][5]){

    int soma = 0;
    int somads = 0;
    // Diagonal principal
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j){
                soma += mat[i][j];
            }
        }
    }
    // Diagonal secundária
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i + j == 4){
                somads += mat[i][j];
            }
        }
    }
    if(somads > soma){
        soma = somads;
    }
    somads = 0;
    // Acima da diagonal principal
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(j > i){
                somads += mat[i][j];
            }
        }
    }
    if(somads > soma){
        soma = somads;
    }
    somads = 0;
    // Abaixo da diagonal principal
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i > j){
                somads += mat[i][j];
            }
        }
    }
    if(somads > soma){
        soma = somads;
    }
    somads = 0;
    // Acima da diagonal secundária
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i + j < 4){
                somads += mat[i][j];
            }
        }
    }
    if(somads > soma){
        soma = somads;
    }
    somads = 0;
    // Abaixo da diagonal secundária
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i + j > 4){
                somads += mat[i][j];
            }
        }
    }
    if(somads > soma){
        soma = somads;
    }
    printf("A maior soma de conjunto da matriz e: %d\n", soma);
}
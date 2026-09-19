/* quadradoMagico.c
    Nicolas de Sousa
    19/09/2026
    programa para verificar se uma matriz e um quadrado magico*/

#include <stdio.h>

void carregarMatriz(int matriz[][100], int ordem);
void analisarQuadradoMagico(int matriz[][100], int ordem);

int main(){

    int ordem;

    printf("Digite a ordem da matriz: ");
    scanf("%d", &ordem);

    int matriz[ordem][100];

    carregarMatriz(matriz, ordem);
    analisarQuadradoMagico(matriz, ordem);

    return 0;
}

void carregarMatriz(int matriz[][100], int ordem){

    for(int i = 0; i < ordem; i++){

        for(int j = 0; j < ordem; j++){

            printf("Digite o valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

        }
    }
}

void analisarQuadradoMagico(int matriz[][100], int ordem){

    int somaReferencia = 0;
    int soma = 0;
    int ehMagico = 1;

    // Soma da primeira linha
    for(int j = 0; j < ordem; j++){
        somaReferencia += matriz[0][j];
    }

    // Verifica as outras linhas
    for(int i = 1; i < ordem; i++){

        soma = 0;

        for(int j = 0; j < ordem; j++){
            soma += matriz[i][j];
        }

        if(soma != somaReferencia){
            ehMagico = 0;
        }
    }

    // Verifica as colunas
    for(int j = 0; j < ordem; j++){

        soma = 0;

        for(int i = 0; i < ordem; i++){
            soma += matriz[i][j];
        }

        if(soma != somaReferencia){
            ehMagico = 0;
        }
    }

    // Diagonal principal
    soma = 0;

    for(int i = 0; i < ordem; i++){
        soma += matriz[i][i];
    }

    if(soma != somaReferencia){
        ehMagico = 0;
    }

    // Diagonal secundária
    soma = 0;

    for(int i = 0; i < ordem; i++){
        soma += matriz[i][ordem - 1 - i];
    }

    if(soma != somaReferencia){
        ehMagico = 0;
    }

    if(ehMagico == 1){
        printf("\nA matriz e um Quadrado Magico!\n");
        printf("A soma magica e: %d\n", somaReferencia);
    }
    else{
        printf("\nA matriz nao e um Quadrado Magico.\n");
    }
}
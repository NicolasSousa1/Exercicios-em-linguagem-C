/* determinante.c 
    Nicolas de Sousa
     19/09/2026
     programa para calcular o determinante de uma matriz 3x3*/

#include <stdio.h>

float calcularDeterminante(int [][3]);

void analisarDeterminante(float);

main(){

    int mat[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    analisarDeterminante(calcularDeterminante(mat));

}

float calcularDeterminante(int matriz[][3]){

    int matrizb[3][5];

    for(int i = 0; i <3; i++){
        for(int j = 0; j < 3; j++){
            matrizb[i][j] = matriz[i][j];
        }
    }

    matrizb[0][3] = matriz[0][0];
    matrizb[1][3] = matriz[1][0];
    matrizb[2][3] = matriz[2][0];

    matrizb[0][4] = matriz[0][1];
    matrizb[1][4] = matriz[1][1];
    matrizb[2][4] = matriz[2][1];

    float determinante = 0;

    for(int i = 0; i < 3; i++){
        determinante += matrizb[0][i] * (matrizb[1][i+1] * matrizb[2][i+2] - matrizb[1][i+2] * matrizb[2][i+1]);
    }
    return determinante;
}

void analisarDeterminante(float determinante){

    if(determinante < 0){
        printf("O determinante da matriz e %.2f, portanto e negativo.\n", determinante);
    }else if(determinante == 0){
        printf("O determinante da matriz e %.2f, portanto e nulo.\n", determinante);
    }else{
        printf("O determinante da matriz e %.2f, portanto e positivo.\n", determinante);
    }
}
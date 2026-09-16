/*
	Name: somarMatriz.c
	Copyright: 
	Author: Nicolas de Sousa
	Date: 16/09/26 11:48
	Description: programa para somar duas matrizes
*/

#include <stdio.h>

void lerMatriz();

void somarMatrizes(int [][3], int [][3]);

void exibirMatrizes(int [][3], int [][3], int[][3]);

main(){
	
    lerMatriz();
	
}

void lerMatriz(){

    
    int matA[3][3];
    int matB[3][3];

    printf("Digite os valores da primeira matriz 3x3: \n");
    for(int i =0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da %d linha coluna %d: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Digite os valores da segunda matriz 3x3: \n");
    for(int i =0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da %d linha coluna %d: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    somarMatrizes(matA, matB);
}

void somarMatrizes(int MA[][3], int MB[][3]){
	
	int matC[3][3];
	
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 3; j++){
			
			matC[i][j] = MA[i][j] + MB[i][j];
			
		}
		
	}
	
	exibirMatrizes(MA, MB, matC);
	
}

void exibirMatrizes(int matA[][3],int matB[][3],int matC[][3]){
	
	puts("Matriz A: \n");
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 3; j++){
			
			printf("|%d|", matA[i][j]);
			
		}
		puts("\n");
	}
	
	puts("Matriz B: \n");
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 3; j++){
			
			printf("|%d|", matB[i][j]);
			
		}
		puts("\n");
	}
	
	puts("soma das matrizes: \n");
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 3; j++){
			
			printf("|%d|", matC[i][j]);
			
		}
		puts("\n");
	}

}
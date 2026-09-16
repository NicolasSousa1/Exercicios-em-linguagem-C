/*
	Name:  matriz.c
	Author: Nicolas de Sousa
	Date: 16/09/26 09:55
	Description: programa para manipular matrizes dentro de uma função
*/

#include <stdio.h>

//seção de prototipação
void imprimirMatriz(int [][3]);

main(){
	
	//int mat[3][3]; //matriz quadrada de ordem 3
	
	int mat[3][3] = {{8,1,2}, {9,3,4}, {7,1,2}}; //definindo os valores da matriz diretamente
	
	imprimirMatriz(mat); // chamando a função passando a matriz como parametro
	
}


//função para imprimir uma matriz quadrada
void imprimirMatriz(int M[][3]){
	
	puts("conteudo da matriz: ");
	
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 3; j++){
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
	
}
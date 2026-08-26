/*  Name: contagemregressiva.c  
    Author: Nicolas de Sousa  Date: 25/08/26 
    Description: algoritmo de contagem regressiva 
*/ 
// seção de importação  
# include <stdio.h>  
// seção de prototipação  
void contar(int);  
main(){  
    int num;  num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    contar(num);  
}  

void contar(int a){
      for(a; a >= 0; a--){
           printf("\n %d", a);  
        }  
        puts("\n FOGO!!!"); 
} 
/* Programa para dizer se um numero é positivo ou negativo
    Nicolas de Sousa
    01/09/26
*/
#include <stdio.h>
char classificarNumero(int);
main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    classificarNumero(num);
}
char classificarNumero(int num){
    if(num < 0){
        return(printf("%d e um numero negativo", num));
    }else if(num > 0){
        return(printf("%d e um numero positivo", num));
    } else{
        return(printf("%d e um numero nulo", num));
    }
}
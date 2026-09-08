/* Programa para inverter um número
    Nicolas de Sousa
    08/09/26
*/

#include <stdio.h>

void inverter(int);

int main() {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    inverter(numero);

    return 0;
}

void inverter(int numero) {
    while(numero > 0) {
        printf("%d", numero % 10);
        numero = numero / 10;
    }
}
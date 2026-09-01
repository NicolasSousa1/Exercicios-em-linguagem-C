/* programa para calcular o delta de uma equação do segundo grau
    Nicolas de Sousa
    01/09/26
*/
#include <stdio.h>
float calcularDelta(float, float, float);
main(){
    float a, b, c;
    printf("Digite o valor de A, B e C: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("o valor de delta e: %f", calcularDelta(a, b, c));
}
float calcularDelta(float a, float b, float c){
    return((b*b) - 4*a*c);
}
/* programa para converter temperatura de Celsius para Fahrenheit
    Nicolas de Sousa
    01/09/26
*/
#include <stdio.h>
float converter(float);
main(){
    float temp;
    printf("Digite uma temperatura em graus celsius: ");
    scanf("%f", &temp);
    printf("%.2f graus sao %.2f fahrenheit", temp, converter(temp));
}
float converter(float temp){
    return(temp * 1.8 + 32);
}
/* programa para calcular a média de notas
    Nicolas de Sousa
    01/09/26
*/
#include <stdio.h>
void calcularMedia(float, float, float);
main(){
    float n1, n2, n3;
    printf("Digite as 3 notas do aluno: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    calcularMedia(n1, n2, n3);
}
void calcularMedia(float n1, float n2, float n3){
    float maior, meio, menor;
    maior = n1;
    maior = (n2 > maior ? n2 : maior);
    maior = (n3 > maior ? n3 : maior);
    menor = n1;
    menor = (n2 < menor ? n2 : menor);
    menor = (n3 < menor ? n3 : menor);
    meio = (n1 + n2 + n3) - (maior + menor);
    printf("a media do aluno com as 3 notas seria: %.2f \n", ((n1 + n2 + n3)/3));
    printf("a media do aluno com as 2 maiores notas seria %.2f \n", ((maior + meio)/2));
    printf("a nota mais alta foi %.2f e a mais baixa foi %.2f", maior, menor);
}
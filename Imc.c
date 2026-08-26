/*
    Nicolas de Sousa
    25/08/2026
    Algoritmo para calcular o IMC de uma pessoa
*/

//seção de importação
#include <stdio.h>

//seção de prototipação
float calcularImc(float, float);


int main() { //inicio do main
    
    char nome[50];
    float peso, altura, imc;
    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = calcularImc(peso, altura);
    printf("%s, voce pesa %.2f kg, tem %.2f metros de altura e seu imc eh: %.2f", nome, peso, altura, imc);

} //fim da função main 

float calcularImc(float peso, float altura){

    float imc = peso / (altura * altura);
    return imc;

}

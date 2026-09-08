/* Programa para carregar um  vetor
    Nicolas de Sousa
    08/09/26
*/

#include <stdio.h>

int carregarVetor();

int calcularMedia(int *);

void exibirMediaArredondada(short int);

main(){

    
    exibirMediaArredondada(carregarVetor());

}

int carregarVetor(){

    int vetor[10];

    for(short int i = 0; i < 10; i++){

        printf("Digite o numero da posicao %d: ", i+1);
        scanf("%d", &vetor[i]);

    }

    return calcularMedia(vetor);
    
}

int calcularMedia(int *vetor){
    short int media = 0;
    for(int i = 0; i < 10; i++){
        media += vetor[i];
    }
    media = media / 10;

    return media;
}

void exibirMediaArredondada(short int media){
    printf("A media arredondada e: %d", media);
}

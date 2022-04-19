#include <stdio.h>

int main(){

    float estoqueMedio, quantidadeMax = 0, quantidadeMin = 0;

    printf("Digite a quantidade maxima: ");
    scanf("%f", &quantidadeMax);

    printf("Digite a quantidade minima: ");
    scanf("%f", &quantidadeMin);

    estoqueMedio = (quantidadeMax + quantidadeMin) / 2;

    printf("Estoque medio: %.2f", estoqueMedio);

    return 0;
}
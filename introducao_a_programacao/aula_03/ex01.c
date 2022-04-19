#include <stdio.h>

int main(){
    int quantidade_minima = 0;
    int quantidade_maxima = 0;  

    printf("Digite a quantidade maxima:\n");
    scanf("%d", &quantidade_maxima);
    printf("Digite a quantidade minima:\n");
    scanf("%d", &quantidade_minima);

    int estoque_medio = (quantidade_minima + quantidade_maxima) / 2;

    printf("O estoque medio e: %d", estoque_medio);

    return 0;
}
#include <stdio.h>

int main(){

    float progresso = 0;
    char barra[] = "█";

    printf("Digite o progresso: ");
    scanf("%f", &progresso);

    if(progresso >= 20 && progresso < 30)
    

    printf("Carregando: %c", barra);

    return 0;
}
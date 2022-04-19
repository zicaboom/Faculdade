#include <stdio.h>

int main()
{
    int restante = 0;

    int quantidade[7] = {0, 0, 0, 0, 0, 0, 0};

    int valores[7] = {100, 50, 20, 10, 5, 2, 1};

    printf("Digite o valor para saque: ");
    scanf("%d", &restante);

    int i = 0;
    while (restante > 0)
    {
        if (restante - valores[i] >= 0)
        {
            quantidade[i] += 1;

            restante -= valores[i];
        }
        else
        {
            i++;
        }
    }

    for (i = 0; i <= 6; i++)
    {
        printf("R$ %d: %d\n", valores[i], quantidade[i]);
    }
}
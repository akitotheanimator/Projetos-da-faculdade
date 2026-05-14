#include <stdio.h>

int main()
{
    int tamanho = 1;
    printf("Escreva o tamanho de sua array: ");
    scanf("%i", &tamanho);
    int vetor[tamanho];
    
    
    printf("\nDigite o numeros da sequencia de sua array: \n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%i", &vetor[i]);
    }
    printf("\nCalculando quantas ocorrencias o ultimo digito possui: ");
    int ocorrencias = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == vetor[tamanho -1])
        {
            ocorrencias += 1;
        }
    }
    printf("%i",ocorrencias);
    return 0;
}

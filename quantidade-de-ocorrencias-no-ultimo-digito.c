#include <stdio.h>

int lerasparadinhas(int array[], int tamanho)
{
    int ocorrencias = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (array[i] == array[tamanho -1])
        {
            ocorrencias += 1;
        }
    }
    return ocorrencias;
}

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
    int ocorrencias = lerasparadinhas(vetor, tamanho);
    printf("%i",ocorrencias);
    return 0;
}

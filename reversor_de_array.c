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
    
    
    
    int vetor_rev[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        vetor_rev[i] = vetor[tamanho - i - 1];
    }
    printf("Array invertida:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%i\n", vetor_rev[i]);
    }
    
    
    return 0;
}

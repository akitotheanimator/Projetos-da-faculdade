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
    int tamanho = 15;
    int vetor[] = {1,5,1,2,5,3,56,6,1,2,51,1,3,2,3};
    

    printf("\nCalculando quantas ocorrencias o ultimo digito possui: ");
    int ocorrencias = lerasparadinhas(vetor, tamanho);
    printf("%i",ocorrencias);
    return 0;
}

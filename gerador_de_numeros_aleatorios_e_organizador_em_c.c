#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//algoritmo de sorting fraco, só que pra esse exemplo serve

void sort(float arr[],int len_arr)
{
    for(int i = 1; i < len_arr;i++)
    {
        if(arr[i-1] > arr[i])
        {
            float vt = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = vt;
        }
    }
    for(int i = 1; i < len_arr;i++)
    {
        if(arr[i-1] > arr[i])
        {
            sort(arr,len_arr);
            break;
        }
    }
}
void reverse_array(float arr[],int len_arr)
{
    float arr_ret[len_arr];
    for(int i = 0; i < len_arr;i++)
    {
        arr_ret[(len_arr-1) - i] = arr[i];
    }
    for(int i = 0; i < len_arr; i++)
    {
        arr[i] = arr_ret[i];
    }
}


float randomf(float min, float max)
{
    return min + (rand() / 2147483647.0) * (max - min);
}
int main()
{
	int tamanho_da_turma = 30; //quantos alunos
	float notas_da_turma[tamanho_da_turma];
	int len_notas_da_turma = sizeof(notas_da_turma) / sizeof(notas_da_turma[0]);
	
	
	srand(time(NULL));
	
	float media = 0;
	for(int i = 0; i < len_notas_da_turma; i++)
	{
		notas_da_turma[i] = randomf(20, 100);
		media += notas_da_turma[i];
	}
	media /= len_notas_da_turma;
	
	
	
	
	printf("Todas as notas da turma:\n\n");
	for(int i = 0; i < len_notas_da_turma; i++)
	{
		printf("%f ", notas_da_turma[i]);
	}
	printf("\n\nMédia: %f",media);
	printf("\n\n\nMelhores que a média: ");
	
	
	sort(notas_da_turma, len_notas_da_turma);
	reverse_array(notas_da_turma, len_notas_da_turma);
	
	
	for(int i = 0; i < 5; i++)
	{
	    if (notas_da_turma[i] > media)
	    	printf("%f ", notas_da_turma[i]);
	}
	return 0;
}

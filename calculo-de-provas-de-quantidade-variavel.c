#include <stdio.h>
#include <string.h>
#include <stdlib.h>


float notas[100];
char texto[100]; //isso aqui é um endereço, logo, não funciona do jeito convencional...
int ponteiroDeNotas = 0;



void mainLoop()
{
    scanf("%s",texto);

    //printf("%s\n", texto);
    
    
    if (strcmp(texto, "PRONTO") == 0)
    {
        if (ponteiroDeNotas == 0)
        {
            printf("\nERRO: Nenhuma prova adicionada. Calculo não é possível.\n");
            mainLoop();
            
        }
        float res = 0;
        for(int i = 0; i < ponteiroDeNotas;i++)
        {
            res += notas[i];
            //printf("%f\n",notas[i]);
        }
        float resultado = (res / (ponteiroDeNotas));
        printf("A nota final calculada é de %.2f.\n",resultado);
        return;
        
        
    } else if (strcmp(texto, "VOLTAR") == 0)
    {
        ponteiroDeNotas -= 1;
        if(ponteiroDeNotas < 0)
          ponteiroDeNotas = 0;
          
          
        for (int i = 0; i < strlen(texto);i++)
        {
            texto[i] = '\0';
        }
        printf("\nEditando valor de nota da prova numero %d.\n", (ponteiroDeNotas + 1));
        
        
    } 
    else
    {
        printf("\nProva número %d foi adicionada com nota valor %d.\n",(ponteiroDeNotas + 1), atof(texto));
        
        
        if (ponteiroDeNotas >= sizeof(notas)/sizeof(notas[0]))
        {
            printf("ERRO: A quantidade de notas excede o tamanho máximo permitido. Porra hein que aluno é esse que fez 100 provas? Tadinho dele.");
            return;
        }
        
        notas[ponteiroDeNotas] = atof(texto);
        for (int i = 0; i < strlen(texto);i++)
        {
            texto[i] = '\0';
        }
        ponteiroDeNotas += 1;
        
    }
    
    
    
    
    
    
    mainLoop();
}


int main()
{


    printf("Escreva a nota de todas as provas que seu aluno teve.\nDigite \"PRONTO\" caso queira que o programa começe a calcular a média das notas.\nDigite \"VOLTAR\" para reinserir a nota de uma prova que você inseriu incorretamente.\n");


    mainLoop();
    return 0;
}

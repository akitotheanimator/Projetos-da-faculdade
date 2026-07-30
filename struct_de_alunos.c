#include <stdio.h>


struct Aluno {
    int idade;
    char nome[200];
    int nota;
};




int main()
{
    int quantAluno = 4;
    struct Aluno t[quantAluno] = {};
    for(int i = 0; i < quantAluno; i++)
    {
        printf("Digite a idade do aluno: ");
        scanf("%i", &t[i].idade);
        printf("Digite o nome do aluno: ");
        scanf("%s", &t[i].nome);
        printf("Digite a nota do aluno: ");
        scanf("%i", &t[i].nota);
        printf("\n");
    }
    
    printf("Foram avaliadas as notas dos alunos: \n");
    for(int i = 0; i < quantAluno; i++)
    {
        printf("%s\n",t[i].nome);
    }
    
    
    printf("\nIdade média da sala: ");
    float id = 0;
    for(int i = 0; i < quantAluno; i++)
    {
        id += t[i].idade;
    }
    id /= quantAluno;
    printf("%f\n", id);
    
    
    
    
    
    float not = 0;
    printf("Nota média da sala: ");
    for(int i = 0; i < quantAluno; i++)
    {
        not += t[i].nota;
    }
    not /= quantAluno;
    printf("%f", not);
    return 0;
}



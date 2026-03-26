#include <stdio.h>

float exame = 0;
int main()
{
    float nota1,nota2,nota3,nota4 = 0;
    
    printf("Por favor, informe a nota das quatro provas...\n");
    scanf("%f",&nota1);
    scanf("%f",&nota2);
    scanf("%f",&nota3);
    scanf("%f",&nota4);
    
    float media = 0;
    if ((nota1 + nota2 + nota3 + nota4) > 0){
        media = (nota1 + nota2 + nota3 + nota4) / 4;
    }
    printf("\nSua nota média é: ");
    printf("%f", media);
    printf(".\n");
    
    if (media >= 70)
    {
        printf("Que bom! Você passou!"); 
    } else if (media < 40)
    {
        printf("Isso é péssimo... Você reprovou..."); 
    } else {
        printf("Você ainda não passou... Mas, pode apresentar a nota do exame para tentar ajudar a passar.\nInforme a nota do seu exame...\n");
        scanf("%f",&exame);
        media = (nota1 + nota2 + nota3 + nota4) / 4 + exame;
        printf("\nNota final: ");
        printf("%f",media);
        printf(".\n");
        
        
        if (media >= 70)
        {
            printf("Muito bem! Você passou!"); 
        } else {
            printf("Isso é péssimo... Você reprovou..."); 
        }
        
    }
    printf("\n\n\n\n"); 
    main();
    return 0;
}

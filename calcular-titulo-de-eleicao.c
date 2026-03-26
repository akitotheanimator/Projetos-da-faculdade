/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int idade = 0;
int main()
{
    printf("Por favor informe sua idade.\n");
    scanf("%i",&idade);
    if (idade <= 0)
    {
        printf("gugu dada?");
        return 0;
    }

    if ( idade < 16)
    {
        printf("Ainda não pode ser um eleitor.");
    } else if (idade >= 16 && idade < 18)
    {
        printf("É um eleitor facultativo.");
    } else{
        if (idade < 65)
            printf("É um eleitor obrigatório.");
        else
            printf("É um eleitor facultativo.");
    }
    printf("\n");
    main();
    return 0;
}

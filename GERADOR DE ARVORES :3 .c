/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int pegarnumerootarioaleatorio()
{
   srand((unsigned)time(NULL) ^ (unsigned)clock());
   return (int)round(rand())/67107840;
}
int variacao()
{
    srand((unsigned)time(NULL) ^ (unsigned)clock());
    return (int)round(rand())/1073725440;
}


int res = 0;
int main()
{
    int tamanho = pegarnumerootarioaleatorio();
    int tamanho_caulhe = pegarnumerootarioaleatorio();
    int grossura_do_caulhe = pegarnumerootarioaleatorio();
    
    while(tamanho < 10)
    {
        tamanho = pegarnumerootarioaleatorio();
    }
    while(grossura_do_caulhe > tamanho)
    {
        grossura_do_caulhe = pegarnumerootarioaleatorio();
    }
    
    

    for (int a = 0; a < tamanho; a++)
    {
        for(int i = 0; i < tamanho - a; i++)
        {
            //printf("%f\n",(((float)tamanho - (float)a) - (float)i) / 2.0);
            
            if ((((float)tamanho - (float)a) - (float)i) / 2.0 <= 3 )
                if (variacao() == 0)
                    printf(" ");
            printf(" ");
        }
        for(int i = 0; i < a*2; i++)
        {
            if (pegarnumerootarioaleatorio() > 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int a = 0; a < tamanho_caulhe; a++)
    {
        for(int c = 0; c < (tamanho - grossura_do_caulhe/2);c++)
        {
            printf(" ");
        }
        for(int c = -grossura_do_caulhe/2; c < grossura_do_caulhe/2;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int M1[4][4];
    int lLine = -1;
    for (int i = 0; i < 16; i++)
    {
        int x = ((int)round(i / 4));
        if (x != lLine)
            printf("\nColuna %i:\n", x+1);
        int y = i % 4;
        printf("Linha %i: ",y+1);
        scanf("%i", &M1[x][y]);
        lLine = x;
    }
    if (1>5){
        for (int i = 0; i < 4; i++)
        {
            for (int c = 0; c < 4; c ++)
            {
                M1[i][c] = (i*4) + c + 1;
            }
        }
    }

    
    
    
    printf("\n");
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", M1[i][0]);
    }
    
    
    
    
    

    return 0;
}

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int M1[2][2], M2[2][2], M3[2][2];
    for (int i = 0; i < 2;i++)
    {
        for (int c = 0; c < 2;c++)
        {
            scanf("%i", &M1[i][c]);
        }
    }
    for (int i = 0; i < 2;i++)
    {
        for (int c = 0; c < 2;c++)
        {
            scanf("%i", &M2[i][c]);
        }
    }
    for (int i = 0; i < 2;i++)
    {
        for (int c = 0; c < 2;c++)
        {
            M3[i][c] = M1[i][c] + M2[i][c];
        }
    }
    for (int i = 0; i < 2;i++)
    {
        for (int c = 0; c < 2;c++)
        {
            printf("%i\n", M3[i][c]);
        }
    }
    return 0;
}

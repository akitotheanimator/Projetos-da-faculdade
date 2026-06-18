/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char STRING[] = "PROGRAMAÇÃO EM C É UM PESADELO :)\0";
    char STRING2[] = "PROGRAMAÇÃO EM C É UM PESADELO\0";
    char STRING3[] = "";
    
    
    strcpy(STRING3, STRING2);
    if (strcmp(STRING,STRING2) == 0)
    {
        printf("desce do cavalo");
    }
    printf(STRING3);
    
    for (int i = 0; i < 37;i++)
    {
        printf("%c\n",STRING[i]);
    }
    return 0;
}

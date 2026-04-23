
#include <stdio.h>

int soma(int a, int b)
{
    return a + b; 
}


int main()
{
    printf("Hello World\n");
    int v0 = soma(6,7);
    int v1 = soma(14,167);
    
    printf("Teste... %d wow que legal %d", v0,v1);
    char algumacoisa[100] = "TESTANDOOOOO";
    
    
    printf("\n1, 2, 3 indiozinhos %d 4, 5, 6 indiozinhos... %d", v0,v1);
    printf("\nquer ver peak? %d %d %d %d", algumacoisa[0],algumacoisa[1],algumacoisa[2],algumacoisa[3]);
    return 0;
}


#include <stdio.h>

void troca(int *x, int *y)
{
    int aux = *x;
    (*x) = (*y);
    (*y) = aux;
}

int main()
{
    int a = 5, b = 3;
    int *x = &a, *y = &b;
    troca(x,y);
    printf("%i %i", a,b);
    return 0;
}

#include <stdio.h>

int main()
{
   int *p = (int*)1000;
   printf("%i\n", p);
   p++;
   
   //endereço é sempre int, ou seja, sempre alinha em 4 bytes.
   //p+=1 ou p++ é a mesma coisa que falar p += (1*4).
   
   
   printf("%i\n", p);
   p+=3;
   printf("%i\n", p);
   p-=3;
   printf("%i\n", p);
   
   //por causa do alinhamento, isso se torna p += (3*4) e p -= (3*4).
    return 0;
}

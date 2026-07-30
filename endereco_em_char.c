#include <stdio.h>

int main()
{
   char *p = (char*)1000;
   printf("%i\n", p);
   p++;
   
   //como o char toma 1 byte na memória, ela não tem alinhamento.

   printf("%i\n", p);
   p+=3;
   printf("%i\n", p);
   p-=3;
   printf("%i\n", p);
   
    return 0;
}

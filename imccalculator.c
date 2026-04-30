#include <stdio.h>

float calcularimc(float peso, float altura)
{
    return peso / (altura * altura);
}
void classificarimc(float imc)
{
    if (imc < 18.5)
        printf("O IMC informado esta abaixo do peso. %f", imc);
    else if (imc >= 18.5 && imc < 25)
        printf("O IMC informado esta normal. %f", imc);
    else if (imc >= 25 && imc < 30)
        printf("O IMC informado esta em sobrepeso. %f", imc);
     else
        printf("O IMC informado esta em obeso. %f", imc);
}

int main()
{
    classificarimc(calcularimc(95.4,1.85));
    return 0;
}

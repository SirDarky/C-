// Escreva um algoritmo que receba dez números do usuário e armazene em um vetor a metade de cada número.
// Após isso, o algoritmo deve imprimir todos os valores armazenados.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    float numeros[11];
    for (i = 1; i <= 10; i++)
    {
        printf("Escreva um numero:\n");
        scanf("%f", &numeros[i]);
        numeros[i]/=2;
    }
    for (i = 1; i <=10; i++)
    {
        printf("numeros[%d]: %f\n", i, numeros[i]);
    }
    
    return 0;
}
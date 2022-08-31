// Escreva um algoritmo que receba dez números do usuário e armazene em um vetor o quadrado de cada número. 
// Após isso, o algoritmo deve imprimir todos os valores armazenados. 
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numeros[11],i;
    for (i = 1; i <= 10; i++)
    {
        printf("Escreva um numero:\n");
        scanf("%d", &numeros[i]);
        numeros[i]*=numeros[i];
    }
    for (i = 1; i <=10; i++)
    {
        printf("numeros[%d]: %d\n", i, numeros[i]);
    }
    return 0;
}
// Escreva um algoritmo que armazene em um vetor todos os números múltiplos de 5, no intervalo fechado de 1 a 500. 
// Após isso, o algoritmo deve imprimir todos os valores armazenados. 
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numeros[101], i;
    for (i=0; i<=500; i++)
    {
        if (i%5==0)
        {
            numeros[i/5]=i;
        }
    }
    for (i=0; i<=100; i++)
    {
        printf("numeros[%d]: %d\n", i, numeros[i]);
    }
    
    
    return 0;
}
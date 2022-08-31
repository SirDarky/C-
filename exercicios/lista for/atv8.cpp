// Escreva um algoritmo que armazene em um vetor os 100 primeiros números ímpares. 
// Após isso, o algoritmo deve imprimir todos os valores armazenados. 
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numeros[100], i;
    for (i=0; i<=100; i++)
    {
        if (i%2)
        {
            numeros[i]=i;
        }
    } 
    for (i=0; i<=100; i++)
    {
        if (i%2)
        {
            printf("numeros[%d]: %d\n", i, numeros[i]);
        }
    }
    return 0;
}
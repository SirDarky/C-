// Escreva um algoritmo que armazene em um vetor todos os números pares do intervalo fechado de 1 a 100. 
// Após isso, o algoritmo deve imprimir todos os valores armazenados. 
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numeros[100], i;
    for (i=0; i<=100; i++)
    {
        if (i%2==0)
        {
            numeros[i/2]=i;
        }
    } 
    for (i=0; i<=50; i++)
    {
        printf("numeros[%d]: %d\n", i, numeros[i]);
    }
    return 0;
}
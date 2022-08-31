// Escreva um algoritmo que armazene em um vetor todos os números inteiros do intervalo fechado de 1 a 100.
// Após isso, o algoritmo deve imprimir todos os valores armazenados. 
#include <stdlib.h>
#include <stdio.h>

int main()
{
int numeros[101], i;

    for (i=1; i<=100; i++)
    {
        numeros[i] = i;
    }

    for(i=1; i<=100; i++){
        printf("O numero da vez: %d\n", numeros[i]);
    }
    system("pause");
    return 0;
}
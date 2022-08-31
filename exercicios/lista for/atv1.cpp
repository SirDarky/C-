// Escreva um algoritmo que armazene em um vetor todos os números inteiros de 0 a 50. 
// Após isso, o algoritmo deve imprimir todos os valores armazenados.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num[51], i;
    for (i=0; i<=50; i++)
    {
        num[i]=i;
    }
    for (i=0; i<=50; i++)
    {
        printf("O numero da vez:%d\n", num[i]);
    }
    system("pause");
    return 0;
}

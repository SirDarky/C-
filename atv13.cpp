// Escreva um algoritmo que receba dez números do usuário e armazene em um vetor o cubo de cada número. 
// Após isso, o algoritmo deve imprimir todos os valores armazenados.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numeros[11],i;
//Entrada de dados
    for (i = 1; i <= 10; i++)
    {
        printf("Escreva um numero:\n");
        scanf("%d", &numeros[i]);
//Calculo do cubo
        numeros[i]=numeros[i]*numeros[i]*numeros[i] ;
    }
//Impressão do resultado
    for (i = 1; i <=10; i++)
    {
        printf("numeros[%d]: %d\n", i, numeros[i]);
    }
    return 0;
}
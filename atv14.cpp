// Escreva um algoritmo que receba quinze números do usuário e armazene em um vetor a raiz quadrada de cada número. 
// Caso o valor digitado seja menor que zero o número –1 deve ser atribuído ao elemento do vetor. 
// Após isso, o algoritmo deve imprimir todos os valores armazenados. 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float numeros[16];
    int i;
//Entrada de dados
    for (i = 1; i <= 15; i++)
    {
        printf("Escreva um numero:\n");
        scanf("%f", &numeros[i]);
        if (numeros[i]<=0)
        {
            numeros[i]= -1;
        }
        else
        {
            numeros[i]= sqrt(numeros[i]);
        }
//Impressão dos valores armazenados        
    }
    for (i = 1; i <=15; i++)
    {
        printf("numeros[%d]: %f\n", i, numeros[i]);
    }
    return 0;
}
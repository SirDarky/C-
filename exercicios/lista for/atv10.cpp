// Escreva um algoritmo que armazene em um vetor todos os números ímpares do intervalo fechado de 1 a 100. 
// Após isso, o algoritmo deve imprimir todos os valores armazenados.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numero[101], i;
    for(i=1; i<=100; i++){
        if (i%2)
        {
            numero[i]=i;
            printf("numero[%d]: %d\n", i, numero[i]);
        }
        
    }
    
    return 0;
}
// Escreva um algoritmo que armazene em um vetor todos os números inteiros de 100 a 200. 
// Após isso, o algoritmo deve imprimir todos os valores armazenados. 
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numero[101], i;
    for(i=0; i<=100; i++){
        numero[i]= i+100;
    }
    for(i=0;i<=100;i++){
        printf("numero[%d]: %d\n", i, numero[i]);
    }
    return 0;
}
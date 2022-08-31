//Escreva um algoritmo que armazene em um vetor todos os números inteiros de 200 a 100 (em ordem decrescente). 
//Após isso, o algoritmo deve imprimir todos os valores armazenados. 
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numeros[101], i;
    for(i=100; i>=0; i--){
        numeros[i]= 200-i;
    }
    for(i=0; i<=100; i++){
        printf("numeros[%d]: %d\n ", i, numeros[i]);
    }
    return 0;
}
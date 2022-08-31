// Escreva um algoritmo que armazene em um vetor todos os números inteiros de 100 a 1 (em ordem decrescente).
// Após isso, o algoritmo deve imprimir todos os valores armazenados. 
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numeros[102], i;

    for(i=101; i>=1; i--){
        numeros[i]=101-i;
    }
    for(i=1; i<=100; i++){
        printf("numeros[%d]: %d\n", i, numeros[i]);
    }
    system("pause");
    return 0;
}
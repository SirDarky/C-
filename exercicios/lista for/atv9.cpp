// Escreva um algoritmo que armazene em um vetor o quadrado dos números ímpares no intervalo fechado de 1 a 20. 
// Após isso, o algoritmo deve imprimir todos os valores armazenados. 
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numero[21], i;
    for(i=0;i<=20;i++){
        if(i%2){
            numero[i]=i*i;
        }
    }
    for ( i = 0; i <= 20; i++)
    {
        if(i%2){
            printf("numero[%d]:%d\n",i,numero[i]);
        }
        
    }
    
    return 0;
}
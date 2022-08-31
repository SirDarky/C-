// Escreva um algoritmo que receba a altura de 10 atletas. 
// Esse algoritmo deve imprimir a altura daqueles atletas que tem altura maior que a média.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    float altura[11], media;
    int i;
//Entrada de dados
    for ( i = 1; i <=10; i++)
    {
        printf("Escreva a altura do atleta\n");
        scanf("%f", &altura[i]);
    }
//Calculo da media de altura
    for (i = 1; i <=10; i++)
    {
        media+= altura[i];
    }
    media/=10;
    printf("media: %f\n", media);
//Imprimindo as alturas maiores que a média
    for (i = 1; i <=10; i++)
    {
        if (altura[i]>media)
        {
            printf("altura[%d]: %f\n", i, altura[i]);
        }
        
    }
    
    return 0;
}
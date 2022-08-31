/*
Em uma cidade do interior, sabe-se que, de janeiro a abril de 1976 (121 dias), não ocorreu temperatura inferior a 15oC nem superior a 40oC. 
As temperaturas verificadas em cada dia estão disponíveis em uma unidade de entrada de dados.  
Fazer um algoritmo que calcule e imprima:         
- A menor temperatura ocorrida;         
- A maior temperatura ocorrida;         
- A temperatura média; 
- O número de dias nos quais a temperatura foi inferior à temperatura média. 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float temperatura[122], media, menorTemp, maiorTemp;
    int i;
    
    // Calculo da menor temperatura
    menorTemp= temperatura[1];
    for ( i = 1; i <= 121; i++)
    {
        if (temperatura[i]< menorTemp)
        {
            menorTemp= temperatura[i];
        }
        
    }

    //Calculo da maior temperatura
    maiorTemp= temperatura[1];
    for ( i = 1; i <=121; i++)
    {
        if (temperatura[i])
        {
            maiorTemp=temperatura[i];
        }
        
    }

    //Calculo da temperatura média
    for (i = 1; i <=121; i++)
    {
        media+=temperatura[i];
    }
    media/=121;

    printf("%f\n", media);
    
    //Calculo do numero de dias menor que a média
    for ( i = 1; i <=121; i++)
    {
        if (temperatura[i]<media)
        {
            printf("temperatura[%d]: [%f]\n", i, temperatura[i]);
        }
        
    }

    return 0;
}
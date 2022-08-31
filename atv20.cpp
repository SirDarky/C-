/*
Uma grande firma deseja saber quais os três empregados mais recentes. 
Fazer um algoritmo para ler um número indeterminado de informações (máximo de 300) contendo o número do empregado 
e o número de meses de trabalho deste empregado e imprimir os três mais recentes. 
Observações: A última informação contém os dois números iguais a zero. 
Não existem dois empregados admitidos no mesmo mês. 
*/
#include <stdio.h>

int main(void) {

    int total, i, j, aux;
    float tempo[300], empregados[300]; 

    printf("Quantidade de empregados?(Max=300): ");
    scanf("%d", &total);
//Retirada dos 2 ultimos cujo numero de meses é igual a 0
    total-=2;
    tempo[total+1]= 0;
    tempo[total+2]=0;
//Entrada de dados
    for(int i=1;i<=total;i++){
    printf("Digite a quantidade de meses trabalhados de %d: \n", i);
    scanf("%f", &tempo[i]);
    }
    for (i = 1; i <=total; i++)
    {
        empregados[i]+=i;
    }
    
// Calculo da Ordenação
    for (i = 1; i <= total; i++)
    {
        for (j = 1; j < total; j++)
        {
            if (tempo[j]>tempo[j+1])
            {
                aux=tempo[j];
                tempo[j]=tempo[j+1];
                tempo[j+1]=aux;

                aux=empregados[j];
                empregados[j]=empregados[j+1];
                empregados[j+1]=aux;
            }
        }  
    }
//Lista dos empregados mais recentes
    printf("Os empregados mais recentes sao:\n");
    for ( i = 1; i <=3; i++)
    {
        printf("O empregado[%.0f] que possui [%.0f] meses.\n",empregados[i], tempo[i]);
    }

    
    return 0;
}
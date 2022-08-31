/*
Um armazém trabalha com 100 mercadorias diferentes identificadas pelos números inteiros de 1 a 100. 
O dono do armazém anota a quantidade de cada mercadoria vendida durante o mês. 
Ele tem uma tabela que indica, para cada mercadoria, o preço de venda. 
Escreva um algoritmo para calcular o faturamento mensal do armazém. 
A tabela de preços é fornecida seguida pelos números das mercadorias e as quantidades vendidas. 
Quando uma mercadoria não tiver nenhuma venda, é informado o valor zero no lugar da quantidade. 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int mercadoria[101], i;
    float preco[101],faturamento;
//Calculando a quantidade de mercadoria vendida (teste)
    for ( i = 1; i <=100; i++)
    {
        printf("Escreva o numero de venda da mercadoria %d no mes\n", i);
        scanf("%d", &mercadoria[i]);
        printf("Escreva o valor de venda\n");
        scanf("%f", &preco[i]);
        system("cls");
    }
//Calculando o faturamento mensal
    for ( i = 1; i <=100; i++)
    {
        if (mercadoria[i]>0)
        {
            faturamento+=mercadoria[i]*preco[i];
        }
        
    } 
    printf("Faturamento mensal eh de %f",faturamento);
    return 0;
}
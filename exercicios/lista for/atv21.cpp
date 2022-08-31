/*
Numa corrida há 10 corredores, de número de inscrição de 1 a 10. 
Faça um algoritmo que leia os valores do número do corredor e o seu respectivo tempo na corrida. 
Além disso, o programa deve imprimir a qualificação e o tempo de corrida, do primeiro ao décimo colocado, 
identificando o número de inscrição do corredor referente àquela colocação. 
Suponha que não há tempos iguais. 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int corredor[11], tempo[11];
    int i,j, aux;
//Ler os valores do número doc arredor e seu respectivo tempo de corrida.
    for (i = 1; i <=10; i++)
    {
        printf("Digite o numero do corredor:\n");
        scanf("%d", &corredor[i]);
        printf("Qual foi o tempo para ele terminar a corrida?\n");
        scanf("%d", &tempo[i]);
    }

//Ordenação do Array Corredor (ordernar do primeiro ao decimo lugar)
    for (i = 1; i < 11; i++)
    {
        for (j = 1; j < 10; j++)
        {
            if (tempo[j]>tempo[j+1])
            {
                aux=corredor[j];
                corredor[j]=corredor[j+1];
                corredor[j+1]=aux;

                aux=tempo[j];
                tempo[j]=tempo[j+1];
                tempo[j+1]=aux;
            }
        }  
    }
//Imprimindo a ordenação
    for (i = 1; i <=10; i++)
    {
        printf("%d eh o corredor de identificador %d com o tempo de %d\n", i, corredor[i], tempo[i]);
    }

    return 0;
}
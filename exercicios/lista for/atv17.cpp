/*
Construa um algoritmo para calcular a média de valores PARES e ÍMPARES, de 50 números que serão digitados pelo usuário. 
Ao final o algoritmo deve mostrar estas duas médias. O algoritmo deve mostrar também o maior número PAR digitado e o menor número 
ÍMPAR digitado. Esses dados devem ser armazenados em um vetor. 
Além disso, devem ser impressos os valores PARES maiores que a média PAR, bem como os valores ÍMPARES menor que a média ÍMPAR. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num[50], i, contadorPar, contadorImpar, menor, maior;
	float mediaPar, mediaImpar;
//Armazenando numero no array
	for(i=1; i<=50; i++){
		printf("Digite um numero\n");
		scanf("%d", &num[i]);
	}
//Separando os numeros pares
	for(i=1;i<=50;i++){
		if(num[i]%2 == 0){
			mediaPar+=num[i];
			contadorPar++;
		}
	}
//Pegando o maior numero par
	mediaPar/=contadorPar;
	printf("Media par:%f\n", mediaPar);
	maior=num[1];
	for(i=1;i<=50;i++){
		if(num[i]%2==0){
			if(num[i]> maior){
				maior=num[i];
			}
		}
	}
	printf("Maior numero par:%d\n", maior);
	
//Separando os numeros impars
	for(i=1;i<=50;i++){
		if(num[i]%2){
			mediaImpar+=num[i];
			contadorImpar++;
		}
	}
	
//Pegando o menor numero impar
	mediaImpar/=contadorImpar;
	printf("Media impar:%f\n", mediaImpar);
	menor=num[1];
	for(i=1;i<=50;i++){
		if(num[i]%2){
			if(num[i]< menor){
				menor =num[i];
			}
		}
	}
	printf("Menor numero impar: %d\n", menor);
	
//Imprimindo valores pares maiores que a media par
	for(i=1;i<=50;i++){
		if(num[i]%2==0){
			if(num[i]>mediaPar){
				printf("O numero %d eh maior que a media par.\n", num[i]);
			}
		}
	}

//Imprimindo valores pares maiores que a media impar
	for(i=1;i<=50;i++){
		if(num[i]%2){
			if(num[i]>mediaImpar){
				printf("O numero %d eh maior que a media impar.\n", num[i]);
			}
		}
	}
	return 0;
}
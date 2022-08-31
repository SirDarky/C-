/* Escreva um algoritmo que leia um conjunto de 50 fichas correspondente à alunos e armazene-as em vetores, 
cada uma contendo, a altura e o código do sexo de uma pessoa (código = 1 se for masculino e 2 se for feminino), 
e  calcule e imprima:          
- A maior e a menor altura da turma;          
- As mulheres com altura acima da média da altura das mulheres;          
- As pessoas com altura abaixo da média da turma. 
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int altura[50], sexo[50], i, maior, numMaior, menor, numMenor, contador, contadorFem;
	float mediaGeral, mediaFem;
	
//Cadastro dos alunos
	for(i=1; i<=50; i++){
		printf("Escreva a altura (em cm) do aluno\n");
		scanf("%d", &altura[i]);
		printf("Digite 1 para aluno masculino, ou 2 para feminino\n");
		scanf("%d", &sexo[i]);
		system("cls");
	}
	
//Calculo do Maior
	maior=altura[1];
	numMaior = 0;
	for (i=1; i<=50; i++){
		if(altura[i]> maior){
			maior = altura[i];
			numMaior = i;
		}
	}
	
//Calculo do Menor
	menor=altura[1];
	numMenor = 0;
	for (i=1; i<=50; i++){
		if(altura[i]< menor){
			menor = altura[i];
			numMenor = i;
		}
	}
	printf("A maior altura: %d\nA menor altura: %d\n", maior, menor);
	
	
	
//As mulheres com altura acima da média da altura das mulheres
	for(i=1; i<=50; i++){
		if(sexo[i]==2){
			mediaFem+= altura[i];
			contadorFem++;
		}
	}
	mediaFem= mediaFem/contadorFem;
	printf("Codigos de mulheres que possuem altura acima da media:\n");
	for(i=1; i<=50; i++){
		if(sexo[i]==2){
			if(altura[i]>mediaFem){
				printf("%d\n", i);
			}
		}
	}

//As pessoas com altura abaixo da média da turma
	for(i=1; i<=50; i++){
			mediaGeral+= altura[i];
			contador++;
	}
	mediaGeral= mediaGeral/contador;
	printf("Codigos de alunos que possuem altura acima da media:\n");
	for(i=1; i<=50; i++){
		if(altura[i]>mediaGeral){
			printf("%d\n", i);
		}
	}

	
return 0;
}
#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int i, medalhasUm, ouroUm, prataUm, bronzeUm, pontuacaoUm;
	int medalhasDois, ouroDois, prataDois, bronzeDois, pontuacaoDois;
	int medalhasTres, ouroTres, prataTres, bronzeTres, pontuacaoTres;
	char pais1[30], pais2[30], pais3[30], MEDALHA;
	ouroUm=0;
	prataUm=0;
	bronzeUm=0;
	pontuacaoUm=0;
	ouroDois=0;
	prataDois=0;
	bronzeDois=0;
	pontuacaoDois=0;
	ouroTres=0;
	prataTres=0;
	bronzeTres=0;
	pontuacaoTres=0;
	
	system("color E");
	
	printf("|Sistema de Olimpíadas|\n");
	printf("\n");
	
	printf("Digite o primeiro país: ");
	fgets(pais1, 30, stdin);
	fflush(stdin);
	printf("Digite o segundo país: ");
	fgets(pais2, 30, stdin);
	fflush(stdin);
	printf("Digite o terceiro país: ");
	fgets(pais3, 30, stdin);
	fflush(stdin);
	
	printf("\n");
	
	printf("Quantas medalhas, possui o primeiro país:");
	scanf("%d", &medalhasUm);
	fflush(stdin);
	
	for(i=1; i<=medalhasUm; i++){
		printf("\nPara a classificação digite ouro(O), prata(P) e bronze(B).\n");
		printf("\nDigite qual foi a medalha %d, de acordo com as informações acima:", i);
		scanf("%c", &MEDALHA);
		fflush(stdin);
		MEDALHA = toupper(MEDALHA);
		if(MEDALHA == 'O'){
			ouroUm++;
			pontuacaoUm = pontuacaoUm + 3;
		}
		else if(MEDALHA == 'P'){
			prataUm++;
			pontuacaoUm = pontuacaoUm + 2;
		}
		else if(MEDALHA == 'B'){
			bronzeUm++;
			pontuacaoUm = pontuacaoUm + 1;
		}
	}
	
	printf("\n");
	printf("Quantas medalhas, possui o segundo país:");
	scanf("%d", &medalhasDois);
	fflush(stdin);
	
	for(i=1; i<=medalhasDois; i++){
		printf("\nPara a classificação digite ouro(O), prata(P) e bronze(B).\n");
		printf("\nDigite qual foi a medalha %d, de acordo com as informações acima:", i);
		scanf("%c", &MEDALHA);
		fflush(stdin);
		MEDALHA = toupper(MEDALHA);
		if(MEDALHA == 'O'){
			ouroDois++;
			pontuacaoDois = pontuacaoDois + 3;
		}
		else if(MEDALHA == 'P'){
			prataDois++;
			pontuacaoDois = pontuacaoDois + 2;
		}
		else if(MEDALHA == 'B'){
			bronzeDois++;
			pontuacaoDois = pontuacaoDois + 1;
		}
	}
	
	printf("\n");
	
	printf("Quantas medalhas, possui o terceiro país:");
	scanf("%d", &medalhasTres);
	fflush(stdin);
	
	for(i=1; i<=medalhasTres; i++){
		printf("\nPara a classificação digite ouro(O), prata(P) e bronze(B).\n");
		printf("\nDigite qual foi a medalha %d, de acordo com as informações acima:", i);
		scanf("%c", &MEDALHA);
		fflush(stdin);
		MEDALHA = toupper(MEDALHA);
		if(MEDALHA == 'O'){
			ouroTres++;
			pontuacaoTres = pontuacaoTres + 3;
		}
		else if(MEDALHA == 'P'){
			prataTres++;
			pontuacaoTres = pontuacaoTres + 2;
		}
		else if(MEDALHA == 'B'){
			bronzeTres++;
			pontuacaoTres = pontuacaoTres + 1;
		}
	}
	
	system("cls");
	
	if((medalhasUm>medalhasDois)and(medalhasUm>medalhasTres)){
		printf("O país que teve mais medalhas foi o %s", pais1);
	}
	else if((medalhasDois>medalhasUm)and(medalhasDois>medalhasTres)){
		printf("O país que teve mais medalhas foi o %s", pais2);
	}
	else if((medalhasTres>medalhasDois)and(medalhasTres>medalhasUm)){
		printf("O país que teve mais medalhas foi o %s", pais3);
	}
	
	fflush(stdin);
	
	if((pontuacaoUm>pontuacaoDois)and(pontuacaoUm>pontuacaoTres)){
		printf("O país que teve a MAIOR pontuação foi o %s", pais1);
	}
	else if((pontuacaoDois>pontuacaoUm)and(pontuacaoDois>pontuacaoTres)){
		printf("O país que teve a MAIOR pontuação foi o %s", pais2);
	}
	else if((pontuacaoTres>pontuacaoDois)and(pontuacaoTres>pontuacaoUm)){
		printf("O país que teve a MAIOR pontuação foi o %s", pais3);
	}
	
	printf("\n");
	
	printf("O país %s possui %d medalhas de ouro, %d medalhas de prata e %d medalhas de bronze com a pontuação de %d.\n", pais1, ouroUm, prataUm, bronzeUm, pontuacaoUm);
	printf("O país %s possui %d medalhas de ouro, %d medalhas de prata e %d medalhas de bronze com a pontuação de %d.\n", pais2, ouroDois, prataDois, bronzeDois, pontuacaoDois);
	printf("O país %s possui %d medalhas de ouro, %d medalhas de prata e %d medalhas de bronze com a pontuação de %d.\n", pais3, ouroTres, prataTres, bronzeTres, pontuacaoTres);
		
    return 0;
}

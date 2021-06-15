#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
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
	
	printf("|Sistema de Olimp�adas|\n");
	printf("\n");
	
	printf("Digite o primeiro pa�s: ");
	fgets(pais1, 30, stdin);
	fflush(stdin);
	printf("Digite o segundo pa�s: ");
	fgets(pais2, 30, stdin);
	fflush(stdin);
	printf("Digite o terceiro pa�s: ");
	fgets(pais3, 30, stdin);
	fflush(stdin);
	
	printf("\n");
	
	printf("Quantas medalhas, possui o primeiro pa�s:");
	scanf("%d", &medalhasUm);
	fflush(stdin);
	
	for(i=1; i<=medalhasUm; i++){
		printf("\nPara a classifica��o digite ouro(O), prata(P) e bronze(B).\n");
		printf("\nDigite qual foi a medalha %d, de acordo com as informa��es acima:", i);
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
	printf("Quantas medalhas, possui o segundo pa�s:");
	scanf("%d", &medalhasDois);
	fflush(stdin);
	
	for(i=1; i<=medalhasDois; i++){
		printf("\nPara a classifica��o digite ouro(O), prata(P) e bronze(B).\n");
		printf("\nDigite qual foi a medalha %d, de acordo com as informa��es acima:", i);
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
	
	printf("Quantas medalhas, possui o terceiro pa�s:");
	scanf("%d", &medalhasTres);
	fflush(stdin);
	
	for(i=1; i<=medalhasTres; i++){
		printf("\nPara a classifica��o digite ouro(O), prata(P) e bronze(B).\n");
		printf("\nDigite qual foi a medalha %d, de acordo com as informa��es acima:", i);
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
		printf("O pa�s que teve mais medalhas foi o %s", pais1);
	}
	else if((medalhasDois>medalhasUm)and(medalhasDois>medalhasTres)){
		printf("O pa�s que teve mais medalhas foi o %s", pais2);
	}
	else if((medalhasTres>medalhasDois)and(medalhasTres>medalhasUm)){
		printf("O pa�s que teve mais medalhas foi o %s", pais3);
	}
	
	fflush(stdin);
	
	if((pontuacaoUm>pontuacaoDois)and(pontuacaoUm>pontuacaoTres)){
		printf("O pa�s que teve a MAIOR pontua��o foi o %s", pais1);
	}
	else if((pontuacaoDois>pontuacaoUm)and(pontuacaoDois>pontuacaoTres)){
		printf("O pa�s que teve a MAIOR pontua��o foi o %s", pais2);
	}
	else if((pontuacaoTres>pontuacaoDois)and(pontuacaoTres>pontuacaoUm)){
		printf("O pa�s que teve a MAIOR pontua��o foi o %s", pais3);
	}
	
	printf("\n");
	
	printf("O pa�s %s possui %d medalhas de ouro, %d medalhas de prata e %d medalhas de bronze com a pontua��o de %d.\n", pais1, ouroUm, prataUm, bronzeUm, pontuacaoUm);
	printf("O pa�s %s possui %d medalhas de ouro, %d medalhas de prata e %d medalhas de bronze com a pontua��o de %d.\n", pais2, ouroDois, prataDois, bronzeDois, pontuacaoDois);
	printf("O pa�s %s possui %d medalhas de ouro, %d medalhas de prata e %d medalhas de bronze com a pontua��o de %d.\n", pais3, ouroTres, prataTres, bronzeTres, pontuacaoTres);
		
    return 0;
}

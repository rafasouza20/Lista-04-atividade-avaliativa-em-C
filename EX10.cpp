#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português

	int i;
	float total, tinto, branco, rosa, percentT, percentB, percentR;
	char vinho;
	i=1;
	total=0;
	tinto=0;
	branco=0;
	rosa=0;
	
	system("color E");
	
	printf("Adicione um vinho no estoque informando qual o tipo do vinho:\n\nT - tinto\nB - branco\nR - rosa\n\n");
	printf("Para finalizar o sistema de entrada de vinhos, digite F(finalizar)\n\n");
	do{
		printf("Digite %dª garrafa TINTO(T), BRANCO(B) ou ROSA(R): ", i);
		scanf("%c", &vinho);
		fflush(stdin);
		vinho = toupper(vinho);

		switch(vinho){
			case 'T': tinto++;
				total++; break;
			case 'B': branco++;
				total++; break;
			case 'R': rosa++;
				total++; break;
			case 'F': printf("\nFinalizando a entrada de vinho...");break;
			default: printf("\nOpção indisponível ou inválida...");
		};
		i++;
	}while(vinho != 'F');
	percentT = (tinto/total)*100;
	percentB = (branco/total)*100;
	percentR = (rosa/total)*100;
	fflush(stdin);
	system("cls");
	printf("\nNo total do estoque temos %.0f garrafas de vinho, informando que:\n\n%.1f%% é de vinho tinto\n%.1f%% é de vinho branco\n%.1f%% é de vinho rosa", total, percentT, percentB, percentR);
	printf("\n");
	printf("--FIM DO SISTEMA--");
	return 0;
}

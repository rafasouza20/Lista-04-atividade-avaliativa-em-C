#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int dia, mes, ano;
	dia=0;
	mes=0;
	ano=0;
	
	printf("Come�ando sistema de data v�lida...\n");
	system("color E");
	
	do {
		printf("Digite o dia: ");
		scanf("%d", &dia);
	} while((dia < 1 )or(dia > 31)); // valida��o
	do {
		printf("Digite o m�s: ");
		scanf("%d", &mes);
	} while((mes < 1 )or( mes > 12)); // valida��o
	do {
		printf("Digite o ano: ");
		scanf("%d", &ano);
	} while((dia < 1)or (dia > 31)); // valida��o
	if((mes == 2)and(dia > 29)){
		printf("O dia %d � inv�lido para o m�s %d", dia, mes); // o m�s de fevereiro n�o tem mais que 29 dias
		}else if((mes != 2) and !((dia == 31) and (mes == 1) or (mes == 3) or (mes == 5) or (mes == 7) or (mes == 8) or (mes == 10) or (mes == 12))){ // para dar dia inv�lido ao m�s
			printf("O dia %d � inv�lido para o m�s %d", dia, mes); 
		}else if(!((mes == 2) and (dia == 29) and (ano % 4 == 0))){ // quando n�o for bissexto
			printf("%d n�o � bissexto, n�o ter� o 29� dia.", ano);
		}else{
			printf("A data %d/%d/%d � v�lida", dia, mes, ano);
}
	
	return 0;
}

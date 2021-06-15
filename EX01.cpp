#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int dia, mes, ano;
	dia=0;
	mes=0;
	ano=0;
	
	printf("Começando sistema de data válida...\n");
	system("color E");
	
	do {
		printf("Digite o dia: ");
		scanf("%d", &dia);
	} while((dia < 1 )or(dia > 31)); // validação
	do {
		printf("Digite o mês: ");
		scanf("%d", &mes);
	} while((mes < 1 )or( mes > 12)); // validação
	do {
		printf("Digite o ano: ");
		scanf("%d", &ano);
	} while((dia < 1)or (dia > 31)); // validação
	if((mes == 2)and(dia > 29)){
		printf("O dia %d é inválido para o mês %d", dia, mes); // o mês de fevereiro não tem mais que 29 dias
		}else if((mes != 2) and !((dia == 31) and (mes == 1) or (mes == 3) or (mes == 5) or (mes == 7) or (mes == 8) or (mes == 10) or (mes == 12))){ // para dar dia inválido ao mês
			printf("O dia %d é inválido para o mês %d", dia, mes); 
		}else if(!((mes == 2) and (dia == 29) and (ano % 4 == 0))){ // quando não for bissexto
			printf("%d não é bissexto, não terá o 29º dia.", ano);
		}else{
			printf("A data %d/%d/%d é válida", dia, mes, ano);
}
	
	return 0;
}

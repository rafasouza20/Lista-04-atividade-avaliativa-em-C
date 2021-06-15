#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int i, num;
	float par, media;
	i=0;
	
	system("color E");
	
	printf("--Cálculo Aritmético--\n\n");
	printf("digite 0 quando quiser sair...\n");
	printf("\n");
	do{
		printf("Insira um número: \n");
		scanf("%d", &num);			
		if(num % 2 ==0 && num !=0){  
		par = par + num;
		i++;
		}
					
	}while(num !=0);
	fflush(stdin);
	media=par/i;
	printf("\n\nA média apenas de números pares é: %.1f", media);	
	
	return 0;
}

#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int i, num;
	float par, media;
	i=0;
	
	system("color E");
	
	printf("--C�lculo Aritm�tico--\n\n");
	printf("digite 0 quando quiser sair...\n");
	printf("\n");
	do{
		printf("Insira um n�mero: \n");
		scanf("%d", &num);			
		if(num % 2 ==0 && num !=0){  
		par = par + num;
		i++;
		}
					
	}while(num !=0);
	fflush(stdin);
	media=par/i;
	printf("\n\nA m�dia apenas de n�meros pares �: %.1f", media);	
	
	return 0;
}

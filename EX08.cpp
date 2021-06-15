#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int i;
	float anacleto, felisberto;
	
	system("color E");
	
	i=0;
	anacleto=1.5;
	felisberto=1.1;

	while(felisberto<anacleto){
		anacleto = anacleto + 0.02;
		felisberto = felisberto + 0.03;
		i++;
		printf("Ano %d - altura do Anacleto: %.2f, altura do Felisberto: %.2f\n", i, anacleto, felisberto);
		printf("\n");
	};

	printf("\nQuantidade de anos para Felisberto alcan�ar Anacleto: %d", i);

	return 0;
}

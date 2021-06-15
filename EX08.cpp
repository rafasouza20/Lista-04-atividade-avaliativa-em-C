#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
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

	printf("\nQuantidade de anos para Felisberto alcançar Anacleto: %d", i);

	return 0;
}

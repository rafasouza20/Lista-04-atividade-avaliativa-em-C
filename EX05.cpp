#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int i, j, somatorio;
    	
   	system("color E");
   	
   	printf("Possibilidades que o lançamento de dois dados dê em soma o valor 7\n");
	
	for(i = 1; i <=6; i++){
		for(j = 1; j <= 6; j++){
		if((i + j == 7)){
			somatorio =  i + j;
			printf("%d + %d = %d\n", i, j, somatorio);
		}
	}
}

	printf("\n");
	printf("Um total de 6 possibilidades...");
	
	return 0;
}

#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int i, j, somatorio;
    	
   	system("color E");
   	
   	printf("Possibilidades que o lan�amento de dois dados d� em soma o valor 7\n");
	
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

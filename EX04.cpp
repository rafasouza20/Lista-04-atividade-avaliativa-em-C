#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int num1, num2, num3;
	num1=1;
	num2=1;
	num3=0;
	
	system("color E");
	
	printf("FIBONACCI");
	for(int i = 0;i < 21 ;i++){
	   printf("%d\n",num2);
	   num2 = num1 + num3;
	   num3 = num1;
	   num1 = num2;
		
	}
	
	return 0;
}

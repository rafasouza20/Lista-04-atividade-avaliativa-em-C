#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
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

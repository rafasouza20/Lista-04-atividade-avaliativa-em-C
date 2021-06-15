#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int num1, num2, i;
	
	system("color E");
	
	printf("Digite o primeiro número onde começará a contar os números primos: ");
	scanf("%d", &num1);
	printf("Digite o segundo número onde terminará de contar os números primos: ");
	scanf("%d", &num2);
	
	if((num1=0)or(num1=1)){
				num1=2;// fiz isso para começar a contar do 2, que é o primeiro número primo
			}
	
	for(int i = num1; i <= num2; i++){
		if((i % 2 != 0) and (i % 3 != 0) and (i % 5 != 0) and (i % 7 != 0) and (i % 11 != 0) || i== 1 || i == 2 || i == 3 || i == 5 || i == 7 || i ==11){
			printf("%d é um número primo!\n", i);
		}
	}	
	return 0;
}

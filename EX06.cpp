#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int num1, num2, i;
	
	system("color E");
	
	printf("Digite o primeiro n�mero onde come�ar� a contar os n�meros primos: ");
	scanf("%d", &num1);
	printf("Digite o segundo n�mero onde terminar� de contar os n�meros primos: ");
	scanf("%d", &num2);
	
	if((num1=0)or(num1=1)){
				num1=2;// fiz isso para come�ar a contar do 2, que � o primeiro n�mero primo
			}
	
	for(int i = num1; i <= num2; i++){
		if((i % 2 != 0) and (i % 3 != 0) and (i % 5 != 0) and (i % 7 != 0) and (i % 11 != 0) || i== 1 || i == 2 || i == 3 || i == 5 || i == 7 || i ==11){
			printf("%d � um n�mero primo!\n", i);
		}
	}	
	return 0;
}

#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int num, num_chute, verdadeiro = 1;
    
    system("color E");
    
    printf("Digite um número de 1 a 100 que seu amigo vai tentar adivinhar: ");
    scanf("%d", &num);
    
    system("cls");
    
    printf("Está quente ou frio?\n");
    printf("Tente adivinhar o número que seu amigo digitou: ");
    scanf("%d", &num_chute);
    
    while(verdadeiro=1){
	
    
    if((num>50)and(num<100)and(num_chute>50)and(num_chute<100)){   
	printf("\nestá quente");
	 while(num_chute!=num){
	 	printf("\nTente novamente: ");
	 	scanf("%d", &num_chute);
	 	fflush(stdin);
	 	break;
}
verdadeiro=1;
}
	else if((num>0)and(num<50)and(num_chute>0)and(num_chute<50)){   
	printf("\nestá quente");
	while(num_chute!=num){
	 	printf("\nTente novamente: ");
	 	scanf("%d", &num_chute);
	 	fflush(stdin);
	 	break;

}
verdadeiro=1;
}

	else if((num>0)and(num<50)and(num_chute>50)and(num_chute<100)){   
	printf("\nestá frio");
	while(num_chute!=num){
	 	printf("\nTente novamente: ");
	 	scanf("%d", &num_chute);
	 	fflush(stdin);
	 	break;
}
verdadeiro=1;
}
	else if((num>50)and(num<100)and(num_chute>0)and(num_chute<50)){   
	printf("\nestá frio");
	while(num_chute!=num){
	 	printf("\nTente novamente: ");
	 	scanf("%d", &num_chute);
	 	fflush(stdin);
	 	break;
}
verdadeiro=1;
}
	else if(num_chute=num){
		printf("PARABÉNS, VOCÊ ADIVINHOU");
		verdadeiro=0;
	}
}

	return 0;
}

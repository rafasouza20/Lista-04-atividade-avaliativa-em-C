#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int num, num_chute, verdadeiro = 1;
    
    system("color E");
    
    printf("Digite um n�mero de 1 a 100 que seu amigo vai tentar adivinhar: ");
    scanf("%d", &num);
    
    system("cls");
    
    printf("Est� quente ou frio?\n");
    printf("Tente adivinhar o n�mero que seu amigo digitou: ");
    scanf("%d", &num_chute);
    
    while(verdadeiro=1){
	
    
    if((num>50)and(num<100)and(num_chute>50)and(num_chute<100)){   
	printf("\nest� quente");
	 while(num_chute!=num){
	 	printf("\nTente novamente: ");
	 	scanf("%d", &num_chute);
	 	fflush(stdin);
	 	break;
}
verdadeiro=1;
}
	else if((num>0)and(num<50)and(num_chute>0)and(num_chute<50)){   
	printf("\nest� quente");
	while(num_chute!=num){
	 	printf("\nTente novamente: ");
	 	scanf("%d", &num_chute);
	 	fflush(stdin);
	 	break;

}
verdadeiro=1;
}

	else if((num>0)and(num<50)and(num_chute>50)and(num_chute<100)){   
	printf("\nest� frio");
	while(num_chute!=num){
	 	printf("\nTente novamente: ");
	 	scanf("%d", &num_chute);
	 	fflush(stdin);
	 	break;
}
verdadeiro=1;
}
	else if((num>50)and(num<100)and(num_chute>0)and(num_chute<50)){   
	printf("\nest� frio");
	while(num_chute!=num){
	 	printf("\nTente novamente: ");
	 	scanf("%d", &num_chute);
	 	fflush(stdin);
	 	break;
}
verdadeiro=1;
}
	else if(num_chute=num){
		printf("PARAB�NS, VOC� ADIVINHOU");
		verdadeiro=0;
	}
}

	return 0;
}

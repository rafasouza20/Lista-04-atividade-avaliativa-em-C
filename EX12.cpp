#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    char candidatos;
    float cand1, cand2, cand3, cand4, branco, nulo;
	int i;
	i=0;
	
	system("color E");
	
	do{
		printf("Digite o n�mero do candidato escolhido de 1 a 4\n5 para voto nulo\n6 para voto branco\n");
		printf("Para finalizar, digite 0: ");
		scanf("%d", &candidatos);
		fflush(stdin);
		
		switch(candidatos){
			
			case 1: printf("\nVoto confirmado com sucesso!\n");
				printf("\n");
				cand1++;
				i++;
				break;
			case 2: printf("\nVoto confirmado com sucesso!\n");
				printf("\n");
				cand2++;
				i++;
				break;
			case 3: printf("\nVoto confirmado com sucesso!\n");
				printf("\n");
				cand3++;
				i++;
				break;
			case 4: printf("\nVoto confirmado com sucesso!\n");
				printf("\n");
				cand4++;
				i++;
				break;
			case 5: printf("\nVoto confirmado com sucesso!\n");
				printf("\n");
				nulo++;
				i++;
				break;
			case 6: printf("\nVoto confirmado com sucesso!\n");
				printf("\n");
				branco++;
				i++; 
				break;
			case 0: printf("\n--FIM DO SISTEMA--\n");
			break;
			default: printf("\nDado inv�lido!\n");
	}
	}while(candidatos != 0);

	return 0;
}

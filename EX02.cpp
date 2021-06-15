#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    	int d_signo, m_signo;
	
	system("color E");
	
	printf("Digite o dia que você nasceu: ");
	scanf("%d", &d_signo); // dia para descobrir o signo
	fflush(stdin);
	printf("Digite o mês que você nasceu: ");
	scanf("%d", &m_signo); // mês para descobrir o signo
	fflush(stdin);
	
	
	if(m_signo == 1 && d_signo >= 21 && d_signo <= 31 || m_signo == 2 && d_signo >= 1 && d_signo <= 19)
		printf("signo Aquário.\n");
		else if(m_signo == 2 && d_signo >= 20 && d_signo <= 29 || m_signo == 3 && d_signo >= 1 && d_signo <= 20)
			printf("signo Peixes.\n");
			
		else if(m_signo == 3 && d_signo >= 21 && d_signo <= 31 || m_signo == 4 && d_signo >= 1 && d_signo <= 20)
			printf("signo Áries.\n");
			
		else if(m_signo == 4 && d_signo >= 21 && d_signo <= 30 || m_signo == 5 && d_signo >= 1 && d_signo <= 20)
			printf("signo Touro.\n");
			
		else if(m_signo == 5 && d_signo >= 21 && d_signo <= 31 || m_signo == 6 && d_signo >= 1 && d_signo <= 20)
			printf("signo Gêmeos.\n");
			
		else if(m_signo == 6 && d_signo >= 21 && d_signo <= 30 || m_signo == 7 && d_signo >= 1 && d_signo <= 21)
			printf("signo Câncer.\n");
			
		else if(m_signo == 7 && d_signo >= 22 && d_signo <= 31 || m_signo == 8 && d_signo >= 1 && d_signo <= 22)
			printf("signo Leão.\n");
			
		else if(m_signo == 8 && d_signo >= 23 && d_signo <= 31 || m_signo == 9 && d_signo >= 1 && d_signo <= 22)
			printf("signo Virgem.\n");
			
		else if(m_signo == 9 && d_signo >= 23 && d_signo <= 30 || m_signo == 10 && d_signo >= 1 && d_signo <= 22)
			printf("signo Libra.\n");
			
		else if(m_signo == 10 && d_signo >= 23 && d_signo <= 31 || m_signo == 11 && d_signo >= 1 && d_signo <= 21)
			printf("signo Escorpião.\n");
			
		else if(m_signo == 11 && d_signo >= 22 && d_signo <= 30 || m_signo == 12 && d_signo >= 1 && d_signo <= 21)
			printf("signo Sagitário.\n");
			
		else if(m_signo == 12 && d_signo >= 22 && d_signo <= 31 || m_signo == 1 && d_signo >= 1 && d_signo <= 20)
			printf("signo Capricórnio.\n");
																									
		else
			printf("A data é inválida\n");
	
    return 0;	
}

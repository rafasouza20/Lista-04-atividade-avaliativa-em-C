#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    	int d_signo, m_signo;
	
	system("color E");
	
	printf("Digite o dia que voc� nasceu: ");
	scanf("%d", &d_signo); // dia para descobrir o signo
	fflush(stdin);
	printf("Digite o m�s que voc� nasceu: ");
	scanf("%d", &m_signo); // m�s para descobrir o signo
	fflush(stdin);
	
	
	if(m_signo == 1 && d_signo >= 21 && d_signo <= 31 || m_signo == 2 && d_signo >= 1 && d_signo <= 19)
		printf("signo Aqu�rio.\n");
		else if(m_signo == 2 && d_signo >= 20 && d_signo <= 29 || m_signo == 3 && d_signo >= 1 && d_signo <= 20)
			printf("signo Peixes.\n");
			
		else if(m_signo == 3 && d_signo >= 21 && d_signo <= 31 || m_signo == 4 && d_signo >= 1 && d_signo <= 20)
			printf("signo �ries.\n");
			
		else if(m_signo == 4 && d_signo >= 21 && d_signo <= 30 || m_signo == 5 && d_signo >= 1 && d_signo <= 20)
			printf("signo Touro.\n");
			
		else if(m_signo == 5 && d_signo >= 21 && d_signo <= 31 || m_signo == 6 && d_signo >= 1 && d_signo <= 20)
			printf("signo G�meos.\n");
			
		else if(m_signo == 6 && d_signo >= 21 && d_signo <= 30 || m_signo == 7 && d_signo >= 1 && d_signo <= 21)
			printf("signo C�ncer.\n");
			
		else if(m_signo == 7 && d_signo >= 22 && d_signo <= 31 || m_signo == 8 && d_signo >= 1 && d_signo <= 22)
			printf("signo Le�o.\n");
			
		else if(m_signo == 8 && d_signo >= 23 && d_signo <= 31 || m_signo == 9 && d_signo >= 1 && d_signo <= 22)
			printf("signo Virgem.\n");
			
		else if(m_signo == 9 && d_signo >= 23 && d_signo <= 30 || m_signo == 10 && d_signo >= 1 && d_signo <= 22)
			printf("signo Libra.\n");
			
		else if(m_signo == 10 && d_signo >= 23 && d_signo <= 31 || m_signo == 11 && d_signo >= 1 && d_signo <= 21)
			printf("signo Escorpi�o.\n");
			
		else if(m_signo == 11 && d_signo >= 22 && d_signo <= 30 || m_signo == 12 && d_signo >= 1 && d_signo <= 21)
			printf("signo Sagit�rio.\n");
			
		else if(m_signo == 12 && d_signo >= 22 && d_signo <= 31 || m_signo == 1 && d_signo >= 1 && d_signo <= 20)
			printf("signo Capric�rnio.\n");
																									
		else
			printf("A data � inv�lida\n");
	
    return 0;	
}

#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int maior, menor ,i ,altura , altura_m , media , mulheres;
	char sexo;
	i = 1;
	mulheres = 0;
	
	system("color E");
	
	while(i<=50){
		printf("Digite a altura da %d� pessoa em cm: ", i);
		scanf("%d",&altura);
		fflush(stdin);
		printf("Digite o sexo da %d� pessoa MASCULINO(M), FEMININO(F): ", i);
		scanf("%c",&sexo);
		fflush(stdin);
		sexo = toupper(sexo);
		if(altura<10){
			printf("Altura inv�lida! \nDigite novamente a altura em cent�metros!: ");
			scanf("%d", &altura);
			fflush(stdin);}
		else {
			if(i == 1){
				menor = altura;
				maior = altura;}
			if(menor > altura)
				menor = altura;
			if(maior < altura)
				maior = altura;
			if(sexo == 'F'){
				altura_m = altura_m + altura;
				mulheres++;}
				}
		i++;
	}
	media = altura_m/mulheres;
	
	system("cls");

	printf("\nA Menor Altura %d\n",menor);
	printf("\nA Maior Altura %d\n",maior);
	printf("\nA M�dia de altura das mulheres %d\n",media);

return 0;

}

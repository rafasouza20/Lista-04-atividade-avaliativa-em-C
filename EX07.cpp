#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int maior, menor ,i ,altura , altura_m , media , mulheres;
	char sexo;
	i = 1;
	mulheres = 0;
	
	system("color E");
	
	while(i<=50){
		printf("Digite a altura da %dª pessoa em cm: ", i);
		scanf("%d",&altura);
		fflush(stdin);
		printf("Digite o sexo da %dª pessoa MASCULINO(M), FEMININO(F): ", i);
		scanf("%c",&sexo);
		fflush(stdin);
		sexo = toupper(sexo);
		if(altura<10){
			printf("Altura inválida! \nDigite novamente a altura em centímetros!: ");
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
	printf("\nA Média de altura das mulheres %d\n",media);

return 0;

}

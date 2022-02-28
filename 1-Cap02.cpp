#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale>

	
int main() {
	
setlocale (LC_ALL, "Portuguese");

	int nike, adidas, mizuno;

	printf("Universidade UNIS \n");
	printf("Disciplina: Sistemas Embarcados \n");
	printf("Aluno(a)\n");
	
	printf("Informe a quantidade de chuteiras da Nike \n");
	scanf("%d", &nike);
	printf("Informe a quantidade de chuteiras da Adidas \n");
	scanf("%d", &adidas);
	printf("Informe a quantidade de chuteiras da Mizuno \n");
	scanf("%d", &mizuno);
	
	printf("\nExistem %d chuteiras da marca Nike\n", nike);
	printf("\nExistem %d chuteiras da marca Adidas\n", adidas);
	printf("\nExistem %d chuteiras da marca Mizuno\n", mizuno);
	
	printf("\nExistem %d chuteiras da marca Nike, %d chuteiras da marca Adidas, %d chuteiras da marca Mizuno\n", nike, adidas, mizuno);
	
	printf("\t\t Quantidade de chuteiras em estoque\n");
	printf("\t\t Nike \t Adidas Mizuno\n");
	printf("\t\t %d \t %d \t %d", nike, adidas, mizuno);
		
	getch();
	
}	
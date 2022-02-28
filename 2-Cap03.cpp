#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale>

	
int main() {
	
setlocale (LC_ALL, "Portuguese");

	int N1;
	
	printf("Universidade UNIS \n");
	printf("Disciplina: Sistemas Embarcados \n");
	printf("Aluno(a)\n");
	
	printf("Informe um número de base decimal\n");
	scanf("%d", &N1);
	
	printf("\nO número %d na base octal é: %o\n", N1, N1);
	printf("\nO número %d na base hexadecimal é: %x\n", N1, N1);
	
	getch();
	
}
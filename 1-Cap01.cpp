#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale>

	
int main() {
	
setlocale (LC_ALL, "Portuguese");
		
	int N1, N2;
	
	printf("Universidade UNIS\n");
	printf("Disciplina: 113913 - ICC\n");
	printf("Aluno(a): \n\n\n");
	
	printf("Número de alunos:");
	scanf("%d", &N1);
	
	printf("Número de alunas:");
	scanf("%d", &N2);
	
	printf("\n O numero de alunos: %d", N2);
	printf("\n O numero de alunas: %d", N1);
	
	getch();
	
}
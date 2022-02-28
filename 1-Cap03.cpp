#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale>

	
int main() {
	
setlocale (LC_ALL, "Portuguese");

	int N1, area, perimetro;
	
	printf("Universidade UNIS \n");
	printf("Disciplina: Sistemas Embarcados \n");
	printf("Aluno(a)\n");
	
	printf("Informe o valor das laterais do quadrado em centimetros\n");
	scanf("%d", &N1);
	
	perimetro = N1 * 4;
	area = N1*N1;
	
	printf("O valor do perimetro do quadrado é %d centimetros\n", perimetro);
	printf("O valor da área do quadrado é %d centimetros \n", area);	
	
	getch();
}
	
	
// alocação de vetor e vetor de caracteres.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void PrintMsg(char *ponteiro, int tamanho);

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num = 32;
	char *p;	
	
	p = (char *) malloc(num); // a string recebe o valor de alocação da variavel "num"
	
	p[0] = 'M'; //atribuir valor a posição do vetor.
	
	for (int i=0; i<num; i++) {
		printf("%c\n", p[i]); //obs. ele vai pegar coisas aleatorias na impressão
	}
	
	PrintMsg(p, num);
	
	return 0;
}

void PrintMsg(char *ponteiro, int tamanho) {
	
	if (!ponteiro) {
		printf("\nMemória insuficiente\n");
	} else {
		printf("\n%d bytes alocados\n", tamanho);
	}
	
}



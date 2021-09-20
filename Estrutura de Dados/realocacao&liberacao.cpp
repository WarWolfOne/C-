//pegar um vetor de 10 posições e durante a execução e transforma-lo em um vetor de 20 posiçoes. 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void PrintMsg(int *ponteiro, int tamanho);

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num = 10;
	int *p;
	
	p = (int *) malloc(num*sizeof(int)); //alocar 10x um inteiro.
		
	for (int i=0; i<num; i++) {
		printf("int[%d] = %d \t end: %d\n", i, p[i], &p[i]); //o "&" é usado quando queremos pegar o endereço de memoria.
	}
	
	num = 20;
	realloc(p, num*sizeof(int)); //realocando memória, no bloco anterior onde eram 10x, se torna20x.	
	
	printf("\n\n");
	for (int i=0; i<num; i++) {
		printf("int[%d] = %d \t end: %d\n", i, p[i], &p[i]); 
	}
	
	free(p);
	
	printf("\n\n Após liberação de memória \n  ");
	printf("int[0] = %d \t end: %d\n", p[0], &p[0]);
	return 0;
}

void PrintMsg(int *ponteiro, int tamanho) {
	
	if (!ponteiro) {
		printf("Memória insuficiente\n");
	} else {
		printf("%d bytes alocados\n", tamanho);
	}
	
}

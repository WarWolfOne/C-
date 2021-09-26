// Revisão >>> passagem de parametros de um vector é sempre por referencia
// #define ORDEM 3 >>> definição de constante, ou seja o valor não altera.

#include <stdio.h> // biblioteca de entrada e saida
#include <stdlib.h> // habilita a função maloc e relações com alocção dinamica alem das funções system.
#include <locale.h> // biblioteca de linguagens regionais.


int main() {
	
	setlocale(LC_ALL, "Portuguese"); // sele??o de local.

	int *p;
	printf("%d\n", sizeof(int));
	
	p = (int *) malloc(sizeof(int)); //malloc para quantidade de bytes a ser alocada.	
	// sizeof entrega o tamanho de alguma coisa.
	
	if (!p) {
		printf("Mem?ria insuficiente\n");
	} else {
		printf("Mem?ria alocada com sucesso\n");
	}
	
	return 0;
	
}

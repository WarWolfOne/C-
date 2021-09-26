//Calloc aloca semalhande ao "Malloc" mas com os valores de memória são zerados, porem o "Calloc" é mais rapido.
//Como os valores de estruturas são atribuidos logo apos a criação, o "Calloc" é mais rapido.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int *p;
	
	p = (int *) calloc(20, sizeof(int));
	
	p[1] = 30;
	
	for (int i=0; i<20; i++) {
		printf("%d\n", p[i]);
	}
	
	return 0;
}

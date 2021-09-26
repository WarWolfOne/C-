#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int a;
	int *Ptra;
	a = 7;
	Ptra = &a;
	
	printf("O endereço de a é %p. \n O valor de Ptra  %p.",&a, Ptra);
	return 0;
	
}


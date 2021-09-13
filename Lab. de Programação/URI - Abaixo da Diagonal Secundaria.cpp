#include <iostream>
#include <stdio.h>

int main () {

	double M [12][12], soma = 0.0;
	int i, j;
	char operador;
	
	scanf ("%c", &operador);
	
	for (i = 0; i < 12; i++) 
		for (j = 0; j < 12; j++)
		scanf("%lf", &M [i][j]);
	 
	 for (i = 0;  i <= 11; i++)
	 	for (j = 11; j > 11 - i; j++)
	 	soma += M [i][j];
	 	
	if (operador == 'M') soma = soma / 66.0;
	printf ("%lf\n", soma);
}

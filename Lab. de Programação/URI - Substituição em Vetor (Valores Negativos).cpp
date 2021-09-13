#include <iostream>
#include <stdio.h>

int main () {
	
	int X [10], i;
	
		for (i = 0; i <= 9; i++) {
		scanf("%d", &X[i]); //X[i] para ler valor para em cada posição dentro do vetor
	}
	
	for (i = 0; i <= 9; i++) {
		if (X [i] <= 0) X [i] = 1;
	}
	
	for (i = 0; i <= 9; i++)
		printf("X[%d] = %d \n",i, X[i]);
}

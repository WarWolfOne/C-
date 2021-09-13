/*
URI Online Judge | 1173
Preenchimento de Vetor I
*/
#include <stdio.h>
#include <iostream>

int main () {
	
	int Vet[10], X;
	
	scanf("%d", &Vet[0]); 	//Valor para posição 0.
		printf("N[0] = %d\n", Vet[0]);
		for (X = 1; X < 10; X++) {
			Vet[X] = Vet[X - 1] * 2;	//Fazer o vector dobrar quando voltar no valor da posição anterior.
			printf ("N[%d", X);		//Esquema de formatação paraaparecer o = como o exercicio manda.
			printf ("] = %d", Vet[X]);
			printf ("\n");
		}
}

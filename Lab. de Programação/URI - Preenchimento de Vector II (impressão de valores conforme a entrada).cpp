#include <stdio.h>
#include <iostream>

int main() {

int N[1000], T, i;
	
	scanf("%d", &T);
	for (i = 0; i < 1000; i++) { //contador até o valor de posições do vetor.
		N [i] = i%T; //i pega o resto de T
	}
	
	for (i = 0; i < 1000; i++)
	printf ("N[%d] = %d\n", i, N[i]);
	
}

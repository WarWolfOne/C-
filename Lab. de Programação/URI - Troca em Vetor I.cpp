#include <iostream>
#include <stdio.h>

int main () {
	
	int N [20], Y, i, v_troca;
	
	for (i = 0; i <= 19; i++) {
		scanf("%d", &N [i]);
	}
		
	for (i = 0; i <=9; i++) { //for de troca onde v_troca
		v_troca = N [i];
		N [i] = N [19 - i];
		N [19 - i] = v_troca;
	}
	
	for (i = 0; i <= 19; i++) {
		printf("N[%d] = %d\n", i, N[i]);
	}
}

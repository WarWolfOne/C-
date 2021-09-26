#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void troca(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

intcalcula (int a, int b, int *c) {
	*c = a-b;
	return a*(b+1);
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");
	
	int x,y,w,z;
	x = 5;
	y = 4;
	troca (x, y);
	z = calcula (x, y, &w);
	printf("%d,%d", w,z);
	
	return 0;
	
}


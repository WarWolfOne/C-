// Marque a opção que demonstra a resposta apresentada pelo comando printf(), na linha 11.

#include <stdio.h>

int square (int y);

main () {
	
	int x;
	
	for (x = 1; x <= 5; x++)
		printf("%i ", square(x) + 1);
}

int square(int y) {
	
	int x;
	x = (y * y + 1);
	return x;
}

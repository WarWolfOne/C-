#include <stdio.h> #include <iostream>

void SOMA (int a, int b) {
	
	int result;
	result = a + b;
	printf ("A soma de %d com %d resulta em: %d \n", a, b, result);
	a = 5;
	b = 18;
	printf ("Variavel ""a"" = %d e variavel ""b"" e = %d", a, b); //as atribuições de valores das duas linhas a cima são trollagem do professor.
}

int main() {
	int a;
	int b;
	a = 10;
	b = 12;
	SOMA (a, b); // a e b possuem o valor das linhas anteriores para enviar a função SOMA.
	return 0;
}

/*
Qual é o valor da variável "result" na linha 07?
Qual é o valor da variável "a" na linha 08?
Qual é o valor da variável "a" na linha 18?
*/

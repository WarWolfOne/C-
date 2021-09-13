#include <iostream>
#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int L, i, j;
    char Operador;
    double M[3][3], Soma, Media;
    
    printf ("linha a ser somada:\n");
	scanf ("%i", &L);
	printf ("Caso queira a média da soma aperte ""M"" se não aperte qualquer tecla.\n");
    scanf ("%s", &Operador);
    
    printf ("\n");
    
    for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
		scanf("%lf", &M[i][j]);
			if (i == L) // colocar a linha para operação
            Soma += M[L][j]; // += é o mesmo que numero + numero. Somará todos os numeros da linha.
        }
    }
    
    printf ("\n");
    
    if (Operador == 'm') { //if caso o operador selecionado na linha 16 seja m. #Média
		Media = Soma / 3; // cáuculo de media
		printf ("%lf\n", Media);
	}
		
    if (Operador != 'm') {  //if caso o operador selecionado na linha 16 seja m. #Soma
    	printf ("%lf\n", Soma);
    }
    
    return 0;
}

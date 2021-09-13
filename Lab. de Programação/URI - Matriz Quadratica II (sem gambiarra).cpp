/*
URI Online Judge | 1478
Matriz Quadrada II
*/

#include <stdio.h>
#include <iostream>

int main() {
   
   int n, i, j; // n = valor da matriz quadrarica; i = linhas; j = colunas.
   
   while (n >= 1) {
   
   		scanf("%d", &n);
   		int m[n][n];
   		
   		if (n == 0) break;
	   
	   for (i = 0; i <n; i++){
	   	   for (j = 0; j < n; j++) {
			  	if (i == j) // daqui para baixo condicionais de controle do tamanho da matriz.
				  m[i][j] = 1;
	   			if (i < j)
				   m[i][j] = j - i + 1;
	   			if (i > j)
				   m[i][j] = i - j + 1;
		   }
	   }
	   
	   for (i = 0; i < n; i++) {
		   for (j = 0; j < n; j++) {
		       if (j == n - 1)
			        printf("%3d", m[i][j]);
			    else 
			       printf(" %3d", m[i][j]);
			}
			printf("\n");
		
		} 	
		printf("\n");
	
	scanf("%d", &n);
	}
	return 0;
}

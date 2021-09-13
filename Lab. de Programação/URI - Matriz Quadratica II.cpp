/*
URI Online Judge | 1478
Matriz Quadrada II
*/

#include <stdio.h>
#include <iostream>

int main() {
   
   int n, i, j; // n = valor da matriz quadrarica; i = linhas; j = colunas.
   
   scanf("%d", &n);
   while (n != 0) {
      printf ("\n");
      for (i = 1; i <= n; i++) { 
         for (j = i; j > 1; j--)
            printf ("%3d", j);
         for (j = 1; j <= n - i + 1; j++) // aqui é onde dá a definição do tamanho da quadratica, j <= n - i + 1.
        	printf ("%3d", j);
         printf ("\n");
      }
      scanf("%d", &n);
   }
   return 0;
} //errado devido a ser uma gambiarra

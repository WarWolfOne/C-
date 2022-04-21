#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tamanho 10

void QuickSort(int *a, int esquerda, int direita);

int main() {

	setlocale(LC_ALL, "Portuguese");
	
		int i, vetor[tamanho];

		for(i = 0; i < tamanho; i++) {
			printf("Digite um valor: ");
			scanf("%d", &vetor[i]);
		}
		QuickSort(vetor, 0, tamanho - 1);
		printf("\nValores Ordenados: \n ");
		for(i = 0; i < tamanho; i++) {
  			printf("%d , ", vetor[i]);
		}
		system("pause");

	return 0;

}

void QuickSort(int *a, int esquerda, int direita) {
    int i, j, x, y;
     
    i = esquerda;
    j = direita;
    x = a[(esquerda + direita) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < direita) {
            i++;
        }
        while(a[j] > x && j > esquerda) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > esquerda) {
        QuickSort(a, esquerda, j);
    }
    if(i < direita) {
        QuickSort(a, i, direita);
    }
}


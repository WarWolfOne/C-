#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void gerarVetor(int vetor[], int tamanho);
void imprimirVetor(int vetor[], int tamanho);
void bubbleSort(int vetor[], int tamanho);

#define tamanho 10
int main() {

	setlocale(LC_ALL, "Portuguese");

	/*int tamanho;
	printf("insira a quantidade de numeros a serem trabalhados: \n");
	scanf("%d", tamanho);*/
	
	int vetor[tamanho];
	char op;
	
	gerarVetor(vetor, tamanho);
	
	printf("b para BubbleSort, s para SelectionSort ou i para InsertionSort \n");
	scanf("%c", &op);
	switch (op) {
		case 'b' :
			bubbleSort(vetor, tamanho);
			imprimirVetor(vetor, tamanho);
		break;	
		case 's' :
			bubbleSort(vetor, tamanho);
			imprimirVetor(vetor, tamanho);
		break;	
		case 'i' :
			bubbleSort(vetor, tamanho);
			imprimirVetor(vetor, tamanho);
		break;	
	}	
	
	return 0;
}

void gerarVetor(int vet[], int num) {
	
	srand(time(NULL));
	
	for (int i = 0; i < num; i++) {
		vet[i] = rand() % 100 + 1;
	}
	
}

void imprimirVetor(int vet[], int num) {
	
		for (int i = 0; i < num; i++) {
			printf("%5d ", vet[i]);
	}
		printf("\n");
	
}

void bubbleSort(int vet[], int num) {
	
	int aux, trocar = 0;
	
	for (int i = 1; i <= num - 1; i++) {
		for (int j = 0; j < num - 1; j++) {
			if (vet[j] > vet[j + 1]) {
				printf("Troca %d por -> %d\n", vet[j], vet[j + 1]);
				aux = vet[j + 1];
				vet[j+1] = vet[j];
				vet[j] = aux;	
				trocar++;
			}
			
		}
		imprimirVetor(vet, num);
	}
	printf("Numero de trocas: %d\n", trocar);
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void gerarVetor(int vet[], int num);
void imprimirVetor(int vetor[], int num);
void insert(int x, int vet[], int num);
void insertionSort(int vet[], int num);

#define tamanho 10

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int vetor[tamanho];
	
	gerarVetor(vetor, tamanho);
	
	clock_t t; 
 	
 	int p, r;
 	p = 0;
	r = tamanho;
	
	t = clock();
	insertionSort(vetor, tamanho);
	imprimirVetor(vetor, tamanho);
	t = clock() - t;	
	
	printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC)));	
	
	return 0;
	 
}
void gerarVetor(int vet[], int num) {
 
 srand(time(NULL));
	
	for (int i = 0; i < num; i++) {
		vet[i] = rand() % 1000 + 1;
	}
}

void imprimirVetor(int vet[], int num) {
	
		for (int i = 0; i < num; i++) {
			printf("%5d ", vet[i]);
	}
		printf("\n");
	
}

void insert(int x, int vet[], int num) {
	while (num > 0 && x < vet[num - 1]) {
		vet[num] = vet[num - 1];
		num--;
	}
	vet[num] = x;
}

void insertionSort(int vet[], int num) {	
	
	for(int i = 0; i < num; i++) {
		insert(vet[i], vet, i);
		imprimirVetor(vet,num);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define tamanho 1000

int a[1001];
int b[30];

void gerarVetor(int a[], int num) {
 
	
 
 srand(time(NULL));
	
	for (int i = 0; i < num; i++) {
		a[i] = rand() % 1000 + 1;
	}
}

void merge(int eq, int mm, int dr) {
	
	int l1, l2, i;
	
	for(l1 = eq, l2 = mm+1, i = eq; l1 <= mm && l2 <= dr; i++) {
		if(a[l1] <= a[l2]) {
			b[i] = a[l1++];
		} else {
			b[i] = a[l2++];
		}
	}
	
	while (l1 <= mm) {
		b[i++] = a[l1++];
	}
	
	while (l2 <= dr) {
		b[i++] = a[l2++];
	}
	
	for(i = eq; i <= dr; i++) {
		a[i] = b[i];
	}
}

sort(int eq, int dr) {
	
	int mm;
	
	if(eq < dr) {
		mm = (eq + dr) / 2;
			sort(eq, mm);
			sort(mm+1, dr);
			merge(eq, mm, dr);
		} else {
			return 0;
		}
	}

int main() {

	setlocale(LC_ALL, "Portuguese");
		
		int a[tamanho];
		gerarVetor(a, tamanho);
		
		clock_t t; 
	
		int i;
		
		printf("Vetor: \n");
		
		for(i = 0; i <= tamanho ; i++) {
			printf("%d ", a[i]);
		}
		
		sort(0, tamanho);
		
		printf("\n\n\n Nova ordem vetorial: \n");
		
		for(i = 0; i <= tamanho; i++) {
			printf("%d ", a[i]);
		}
		
		t = clock(); 
		t = clock() - t; 
		
	return 0;

}

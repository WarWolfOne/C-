#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int vetor[15] = {1,7,11,14,16,19,20,22,23,33,44,47,50,55,63};
	int flag = 0;
	int key;
	printf("Chave de Busca: ");
	scanf("%d", &key);
	printf("--------------------------------");
	
	int i;
	
	for(i = 0; i <= key; i++ ){
		if(vetor[i] == key){
			printf("\n--------------------------------\n Busca finalizada com sucesso! %d", key);
			flag = 1;
			break;
		}else if (vetor[i] < key){
			printf("\n procurando...");
		}else break;
	}if(flag == 0){
	printf("\n--------------------------------\n Chave inexistente!");
	}
	
	return 0;

}


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int vetor[15] = {3,7,9,16,19,29,35,41,47,50,53,56,68,71};
	int flag = 0;
	int key;
	printf("Chave de Busca: ");
	scanf("%d", &key);
	printf("--------------------------------");
	
	int i;
	
	for(i = 0; i <= key; i++ ){
		//printf("%d - %d", vetor[i], key);
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


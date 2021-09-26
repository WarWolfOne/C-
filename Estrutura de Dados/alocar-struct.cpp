#include <stdio.h>
#include <stdlib.h>

typedef  struct node Node;

struct node {	
	//Dados
	int idCliente;
	float conta;
	
	// Referencia
	Node *proximo;	
};

Node *alocarNode(int idCliente) {
		
	Node  *node = (Node *) malloc(sizeof(Node)); //alocar tamanho de nó. 

	node->idCliente = idCliente;
	node->idCliente = NULL;
	
	return node;
	
}

int main() {
	
	Node  *node = alocarNode(1);
	
	printf("Cliente id: %d", node->idCliente);
	
	return 0;
}

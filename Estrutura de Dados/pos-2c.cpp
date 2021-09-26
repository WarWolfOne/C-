#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	int matricula;
	int turma;
}Aluno;

Aluno aluno[100];

int main(int matricula, int turma) {

	setlocale(LC_ALL, "Portuguese");
	
	int i;
	i = 1;
	for (i=0; i<100; i++) {
		if(aluno[i].matricula == matricula)
		aluno[i].turma = turma;
	}
	
	printf("%d ", i);
	
	return 0;
}


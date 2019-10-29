#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct AnoRef
{
	int ano;
	int semestre;
};
typedef struct AnoRef anoRef;

struct Aluno
{
	int mat;
	char *nome[21];
	AnoRef anoref;
}
typedef struct Aluno aluno;

FILE * abreArquivo (void)
{
	FILE * fin;
	char * arqEntrada = "alunos.txt";
	if ((fin = fopen(arqEntrada,"r")) == NULL)
	{
		printf("%s nao pode ser aberto\n", arqEntrada);
		exit(1);
	}
	return fin;
}

Aluno * criaAluno (int mat, char * nome, int ano, int sem)
{
	Aluno * a;
	a = (Aluno *)malloc(sizeof(Aluno));
	if (a == NULL)
	return NULL;
	a->mat = mat;
	strcpy(*a->nome, nome);
	a->anoref.ano = ano;
	a->anoref.semestre = sem;
	return a;
}

void imprimeTudo(int n, Aluno ** v)
{
	int i=0;
	while (i<n)
	{
		printf("%d %s %d %d\n",v[i]->mat,v[i]->nome,v[i]->anoref.ano,v[i]->anoref.semestre);
		i++;
	}
}
void liberaAlunos(int n, Aluno ** v)
{
	int i=0;
	while (i<n)
	{	
		free(v[i]);
		i++;
	}
	printf("Todos os alunos liberados\n");
}

int main (void)
{
	Aluno *v[3];
	int i=0, mat, ano, sem;
	char nome[21];
	while (i<3)
	{
		fscanf (abreArquivo, "%d, %20[^\n], %d, %d", &mat, &nome, &ano, &sem);
		v[i]= criaAluno (mat, nome, ano, sem);
		i++;
	}
	printf("Matricula, Nome, Ano e Semestre:\n");
	imprimeTudo(3, v);
	liberaAlunos(3, v);
	return 0;
}
	

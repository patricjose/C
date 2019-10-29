#include <stdio.h>

struct avaliacao
{ 
	float valorVendidoNoMes;
	int numeroDeFaltas;
};
typedef struct avaliacao Avaliacao;

struct vendedor
{ 
	int inscricao;
	char nome[51];
	float salário_base;
	Avaliacao aval;
};
typedef struct vendedor Vendedor;

float calculaExtra (Avaliacao a)
{
	if (a.numeroDeFaltas<2 && a.valorVendidoNoMes>2000)
	{
		return 180;
	}
	if (a.numeroDeFaltas>=2 && a.numeroDeFaltas<4 && a.valorVendidoNoMes>2000)
	{
		return 150;
	}
	if (a.numeroDeFaltas>=4 && a.numeroDeFaltas<6 && a.valorVendidoNoMes>5000)
	{
		return 120;
	}
	else
	{
		return 0;
	}
}

void calculaValorTotalDaFolha (Vendedor v)
{



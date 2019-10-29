#include <stdio.h>
#include <stdlib.h>

struct Pessoa
{
	int idade;
	int peso;
};
typedef struct Pessoa pessoa;

int cmpInt (int a, int b)
{
	return a<b;
}

void quickIdade (int n, Pessoa * v)
{
	int x = v[0].idade;
	int temp;
	int a = 1;
	int b = n-1;
	if (cmpInt(n, 1)!=0)
		return;
	do
	{
		while (cmpInt(a,n) && !cmpInt(v[a].idade,x))
			a++;
		while (cmpInt(v[b].idade,x))
			b--;
		if (cmpInt(a, b))
		{
			temp = v[a].idade;
			v[a].idade = v[b].idade;
			v[b].idade = temp;
			a++;
			b--;
		}
	} 
	while (!cmpInt(a, b));
	v[0].idade = v[b].idade;
	v[b].idade = x;
	quickIdade (b, v);
	quickIdade (n-a, &v[a]);
}

void quickPeso (int n, Pessoa * v)
{
	int x = v[0].peso;
	int temp;
	int a = 1;
	int b = n-1;
	if (!cmpInt(n, 1))
		return;
	do
	{
		while (cmpInt(a, n) && !cmpInt(v[a].peso, x))
			a++;
		while (cmpInt(v[b].peso, x))
			b--;
		if (cmpInt(a, b))
		{
			temp = v[a].peso;
			v[a].peso = v[b].peso;
			v[b].peso = temp;
			a++;
			b--;
		}
	} 
	while (cmpInt(a, b)!=0);
	v[0].peso = v[b].peso;
	v[b].peso = x;
	quickPeso (b, v);
	quickPeso (n-a, &v[a]);
}

int main (void)
{
	Pessoa tab[]={{20,50},{10,30},{25,40},{18,65},{10,40},{18,60}};
	Pessoa * v[]={tab, tab+1, tab+2, tab+3, tab+4, tab+5};
	quickIdade(6, *v);
	quickPeso(6, *v);
	return 0;
}
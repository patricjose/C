#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa
{
	char * nome;
	int idade;
};
typedef struct pessoa Pessoa;

static int compInt (int a, int b)
{
	return a>b;
}

static int compStr (char a, char b)
{
	return a>b;
}

static void bolhaInt (int v_int[], int n)
{
	int i=n-1;
	int troca;
	while (i>0)
	{
		int haTroca=0;
		int j=0;
		while (j<i)
		{
			if (compInt (v[j], v[j+1]!=0))
			{
				troca=v[j];
				v[j]=v[j+1];
				v[j+1]=troca;
				haTroca=1;
			}
			j++;
		}
		if (haTroca==0)
			return;
		i--;
	}
}

static void bolhaStr (char v_str[], int n)
{
	int i=n-1;
	int j;
	char troca;
	while (i>0)
	{
		int haTroca=0;
		j=0;
		while (j<i)
		{
			if (compStr(v_str[j],v_str[j+1])!=0)
			{
				troca=v_str[j];
				v_str[j]=v_str[j+1];
				v_str[j+1]=troca;
				haTroca=1;
			}
			j++;
		}
		if (haTroca==0)
			return;
		i--;
	}
}

void criaPessoa (char * nome, int idade)
{
	Pessoa.nome= (char*) malloc (sizeof (char)*strlen(nome));
	Pessoa.nome=nome;
	Pessoa.idade=idade;
}

static void bolhaNome (Pessoa * v, int n)
{
	
}

int main (void)
{
	/*int v[5]={5,1,7,2,8,};
	bolhaInt (v, 5);
	int i=0;
	while (i<5)
	{
		printf ("%d", v[i]);
		i++;
	}*/
	Pessoa tab[1]= criaPessoa ("Diana Maria", 22);
	Pessoa tab[2]= criaPessoa ("Beatrice maria", 30);
	Pessoa tab[3]= criaPessoa ("Ada Eva", 30);
	Pessoa tab[4]= criaPessoa ("Diana Maria", 26);
	Pessoa tab[5]= criaPessoa ("Beatrice Dante", 29);
	Pessoa tab[6]= criaPessoa ("Helena Troia", 25);
	Pessoa tab[7]= criaPessoa ("Diana Maria", 20);
	Pessoa tab[8]= criaPessoa ("Beatric Dante", 25);
	bolhaNome (tab, 8);
	return 0;
}


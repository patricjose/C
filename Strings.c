#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculaStr (char *s, int i)
{
	if (*s=='\0')
	return i;
	if (*s=='a')
	{
		i++;
		return calculaStr (s+1, i);
	}
	else 
	return calculaStr (s+1, i);
}

int comprimentoStr (char *s, int i)
{
	if (*s!='\0')
	{
		i++;
		return comprimentoStr(s+1, i);
	}
	return i;
}

void inverteStr (char * s, int i)
{
	if (i!=0)
	{
		printf ("%c", *s);
		i--;
		inverteStr (s-1, i);
	}
}

int main (void)
{
	char s[] = "Rio de Janeiro";
	int i=0, cont;
	cont= calculaStr(s, i);
	printf ("%d\n", cont);
	i=0;
	cont= comprimentoStr(s, i);
	cont--;
	printf ("%d\n", cont);
	inverteStr (s+cont, cont);
	printf ("\n");
	return 0;
}
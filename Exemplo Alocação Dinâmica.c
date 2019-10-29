#include <stdio.h>
#include <stdlib.h>

void * strdup (char a[])
{
	char * p= (char *)malloc(4*sizeof(char));
	if (p== NULL)
	{
		printf ("Memoria insuficiente");
		exit (1);
	}
	p = a;
	printf ("%s\n", p);
}

int main (void)
{
	char a []= {'P','U','C','\0'};
	printf ("%s\n", a);
	a [2]= 'a';
	strdup (a);
	return 0;
}

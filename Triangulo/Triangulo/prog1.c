#include <stdio.h>
#include "geometria.h"

int main (void)
{
	float raio, circ, lado, area;
	printf ("Entre com o lado do triangulo:\n");
	scanf ("%f", &lado);
	eqTriang (lado, &area);
	circulo (area, &raio, &circ);
	printf ("Lado: %f\n Area: %f\n Raio: %f\n Circunferencia: %f", lado, area, raio, circ);
	return 0;
}


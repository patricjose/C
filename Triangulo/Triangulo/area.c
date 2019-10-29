#include "geometria.h"
#include <math.h>

void eqTriang (float lado, float * area)
{
	*area= lado*lado*(sqrt(3.)/4);
}

void circulo (float area, float * raio, float * circ)
{
	*raio=sqrt( area/ PI);
	*circ= 2*PI*(*raio);
}

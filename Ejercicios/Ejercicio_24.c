#include <stdio.h>
float func_area(float b, float a);
float func_entrada(void);
int main()
{
	float b, h;
	printf("\nBase del rectangulo: ");
	b = func_entrada();
	printf("\nAltura del rectangulo: ");
	h = func_entrada();
	printf("\nArea del rectangulo: %.2f\n", func_area(b, h));
	return 0;
}
/* Funcion que captura un numero y lo devuelve */
float func_entrada()
{
	float m;
	do {
		scanf("%f", &m);
	} while (m <= 0.0);
	return m;
}
/* Funcion que calcula el area de un rectangulo */
float func_area(float b, float a)
{
	return (b*a);
}


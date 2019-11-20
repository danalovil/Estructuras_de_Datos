#include <stdio.h>
/* Constantes globales */
const int num_lineas = 5;
const char blanco = ' ';
const char asterisco = '*';
void main()
{
	int fila, blancos, cuenta_as;
	puts(" ");	/* Deja una linea de separacion */
			/* Bucle externo: dibuja cada linea */
	for(fila = 1; fila <= num_lineas; fila++)
	{
		putchar('\t');	/* Primer bucle interno: escribe espacios */
		for(blancos = num_lineas-fila; blancos > 0; blancos--)
			putchar(blanco);
		for(cuenta_as = 1; cuenta_as < 2 * fila; cuenta_as++)
			putchar(asterisco);
			/* Terminar linea */
		puts(" ");
	}		/* Fin del bucle externo */
}

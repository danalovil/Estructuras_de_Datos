#include <stdio.h>
int func_max(int x, int y)
{
	if(x < y)
		return y;
	else
		return x;
}
int main()
{
	int m, n;
	do
	{
		printf("Teclee dos numeros (0 para salir): ");
		scanf("%d %d", &m, &n);
		printf("\nMaximo de %d y %d es: %d\n", m, n, func_max(m, n));	/* Llamada a la funcion func_max */
	}while(m || n != 0);
	return 0;
}

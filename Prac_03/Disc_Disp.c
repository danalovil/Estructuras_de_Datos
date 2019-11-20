#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int cuantos = 0;
	FILE *fp = NULL;
	fp = fopen ("archivoT.dat", "W");
	if(fp == NULL)
	{
		puts("No lo puede abrir");
		return -1;
	}
	cuantos = fprintf(fp, "%c", 'A');
	if(cuantos < 1)
	{
		fclose (fp);
		return 0;
	}
while(cuantos > 0);
return 0;
}


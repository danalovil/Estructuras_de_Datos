#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n_octetos=0;
	void *memoria=NULL;
	do
	{
		memoria=malloc(1);
		if(memoria==NULL)
		{
			printf("Puede reservar %d octetos \n", n_octetos);
		}
		else
		{
			n_octetos++;
		}
	}
	while(memoria != NULL);
return 0;
} 

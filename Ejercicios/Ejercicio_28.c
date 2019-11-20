#include <stdio.h>
long int func_fibonacci(void);
int main()
{
	int n, i;
	printf("\nCuantos numeros de fibonacci?: ");
	scanf("%d", &n);
	printf("\nSecuencia de fibonacci: 0, 1");
	for(i = 2; i < n; i++)
		printf(", %ld", func_fibonacci());
	return 0;
}
long int func_fibonacci(void)
{
	static int x = 0;
	static int y = 1;
	y = y + x;
	x = y - x;
	return y;
}

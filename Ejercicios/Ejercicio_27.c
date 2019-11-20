#include <stdio.h>
#define PI 3.141592
#define func_VOLCONO(radio,altura) ((PI*(radio*radio)*altura)/3.0)
int main()
{
	float radio, altura, volumen;
	printf("\nIntroduzca radio del cono: ");
	scanf("%f", &radio);
	printf("Introduzca altura del cono: ");
	scanf("%f", &altura);
	volumen = func_VOLCONO(radio, altura);
	printf("\nEl volumen del cono es: %.2f unidades cubicas\n", volumen);
	return 0;
}

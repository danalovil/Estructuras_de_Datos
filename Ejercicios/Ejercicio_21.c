#include <stdio.h>
void func_01(void)
{
	printf("Segunda funcion\n");
	return;
}
void func_02(void)
{
	printf("Tercera funcion\n");
	return;
}
int main()
{
	printf("Primera funcion llamada main()\n");
	func_01();		/* Llamada a la funcion func_01 */
	func_02();		/* Llamada a la funcion func_02 */
	printf("main se termina\n");
	return 0;		/* Devuelve control al sistema */
}

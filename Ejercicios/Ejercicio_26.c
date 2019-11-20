#include <stdio.h>
#include <math.h>
void func_potrat1(double x, double y);
void func_potrat2(double* x, double* y);
void main()
{
	double a, b;
	a = 5.0;
	b = 1.0e2;
	func_potrat1(a, b);
	printf("\na = %.1f b = %.1lf", a, b);
	func_potrat2(&a, &b);
	printf("\na = %.1f b = %.1lf\n", a, b);
}
void func_potrat1(double x, double y)
{
	x = x*x;
	y = y/100;
}
void func_potrat2(double* x, double* y)
{
	*x = (*x)*(*x);
	*y = (*y)/10;
} 

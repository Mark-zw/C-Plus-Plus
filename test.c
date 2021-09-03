#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c;
	double derta = 0;
	double x1, x2;
	while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
	{
		if (a == 0)
		{
			printf("Not quadratic equation\n");
		}
		else
		{
			derta = b * b - 4 * a * c;
			if (derta == 0)
			{
				x1 = x2 = -b / (2*a);
				printf("x1=x2=%.2lf\n", x1);
			}
			else if (derta > 0)
			{
				x1 = (-b - sqrt(derta)) / (2 * a);
				x2 = (-b + sqrt(derta)) / (2 * a);
				printf("x1=%.2lf;x2=%.2lf\n", x1, x2);
			}
			else
			{
				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", 
					-b /( 2 * a), sqrt(-derta) / (2 * a), 
					-b / (2 * a), sqrt(-derta) / (2 * a));
			}
		}
	}
	return 0;
}

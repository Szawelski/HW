/* program obliczający równanie kwadratowe */

#include <stdio.h>
#include <math.h>

int zapetlenie = 1;

int main ()
{
	while(zapetlenie == 1)
	{
	double a, b, c, delta, x1, x2;
	printf("\nProgram obliczający równanie kwadratowe\n");
	printf("Podaj a = "); 
	scanf("%lf", &a);
	printf("Podaj b = "); 
	scanf("%lf", &b);
	printf("Podaj c = "); 
	scanf("%lf", &c);
	printf("Obliczam funkcję y=%lfx^2+%lfx+%lf\n", a, b, c);
	if (a == 0)
	{ 
		printf("To nie jest równanie kwadratowe!, a = 0\n");
	}
	else 
	{
		delta=(b*b)-(4*a*c);
		printf("delta = %lf\n", delta);
		if(delta>0)
		{
			x1=(-b-sqrt(delta))/(2*a);
			x2=(-b+sqrt(delta))/(2*a);
			printf("Równanie posiada dwa rozwiązania: x1 =%lf, x2 =%lf\n", x1, x2);
		}
		else if(delta == 0)
		{
			x1=-b/(2*a);
			printf("Równanie posiada jedno rozwiazanie: x =%lf\n", x1);
			
		}
		else
		{
			printf("Równanie nie posiada rozwiązania, delta<0\n");
		}
	}
	printf("Jeśli chcesz liczyć dalej wciśnij 1, jeśli nie wciśnij 2");
	scanf("%d", &zapetlenie);
	}
	return 0;
}

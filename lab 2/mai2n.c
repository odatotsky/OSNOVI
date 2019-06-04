#include<stdio.h>
#include<conio.h>
int main(void)
{
	float s;
	float a;
	float c;
	float b;
	float x;
	int n;
	int i;
	int sign;
	printf("n= ");
	scanf("%d", &n);
	printf("x= ");
	scanf("%f", &x);
	i = 1;
	s = 1;
	sign = -1;
	c = x * x;
	b = 2;
	while (i < n)
	{

		a = c / b;
		s = s + (a*sign);
		sign = -sign;
		c = c * x*x;
		b = b * (i + 2)*(i + 3);
		i++;

	}
	printf("s= %6f\n", s);
	getch();
	return 0;
}

#include <stdio.h>

#include <conio.h>

#define K 3

#define N 4

int main(void)

{

	int mass[K][N];

	int min, max;

	int i, j;

	int tekmax, tekmin;

	int gi;

	gi = 0;

	for (i = 0; K > i; i++)

	{

		for (j = 0; N > j; j++)

		{

			scanf("%d", &mass[i][j]);

		}

	}

	min = mass[0][0];

	max = mass[0][0];

	do

	{

		for (j = 0; N > j; j++)

		{

			if (mass[gi][j] > max)

			{

				max = mass[gi][j];

				tekmax = gi;

			}

			if (mass[gi][j] < min)

			{

				max = mass[gi][j];

				tekmin = gi;

			}

		}

		gi++;

	}

	while (gi < K);

	for (i = 0; K > i; i++)

	{

		for (j = 0; N > j; j++)

		{

			if ((tekmin == tekmax) && (tekmax == i))

			{

			}

			else

			{

				mass[i][j] = 0;

			}

			printf("%d", mass[i][j]);

			printf(" ");

		}

		printf("\n");

	}

	getch();

	return 0;

}
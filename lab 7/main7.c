#include <stdio.h>

#include <conio.h>

void main(void)

{

	int z, l = 0;

	unsigned y;

	unsigned mask;

	int ctr;

	int i;

	i = 0;

	mask = 1;

	ctr = 0;

	printf("z = ");

	scanf("%x", &z);

	y = (unsigned int)z;

	while (y != 0)

	{

		l = y & mask;

		if (l == 1)

		{

			ctr++;

		}

		y >>= 1;

		i++;

		if (i == 8)

		{

			printf("kol-vo edenic=%d\n", ctr);

			i = 0;

			ctr = 0;

		}

	}

	if (i > 0 && i < 8)

	{

		printf("kol-vo edenic=%d\n", ctr);

	}

	getch();

}

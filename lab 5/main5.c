#include <stdio.h>

#include <conio.h>

#define N 10

int main(void)

{

	int x[N];

	int aver;

	int i;

	int flag;

	for (i = 0; i < N; i++)

	{

		scanf("%d", &x[i]);

	}

	aver = x[1] - x[0];

	for (i = 0; i < N - 1; i++)

	{

		if ((x[i + 1] - x[i]) == aver)

		{

			flag = 1;

		}

		else

		{

			flag = 0;

			printf("eto ne progressia");

			break;

		}

	}

	if (flag == 1)

	{

		printf("eto progressia");

	}

	getch();

	return 0;

}
	
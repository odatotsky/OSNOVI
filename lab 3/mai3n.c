#include <stdio.h>

#include <math.h>

#include <conio.h>

int main(void)

{

	int c;

	int slovo;

	int result;
	slovo = 0;

	result = 0;

	while ((c = getchar()) != EOF)
	{

		if (c == ' ' || c == '.' || c == '.' || c == '\n')

		{

			if ((slovo % 2) != 0)

			{

				result++;
			}
			slovo = 0;
		}
		else
		{
			slovo++;
		}
	}
	printf("number of words=%d\n", result);
	getch();
	return 0;
}
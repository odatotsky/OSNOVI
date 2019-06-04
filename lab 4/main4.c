#include <stdio.h>

#include <math.h>

#include <conio.h>

#define MAXLINE 1000

#define YES 1

#define NO 0

void process_line(char buffer[]);

int main(void)

{

	char line[MAXLINE];

	gets(line);

	process_line(line);

	puts(line);

	getch();

	return 0;

}

void process_line(char buffer[])

{

	char c;

	int glas;

	int i, j;

	int pos;

	int start;

	int slovo;

	start = 0;

	i = 0;

	pos = 0;

	glas = 0;

	slovo = NO;

	do

	{

		c = buffer[i];

		if (c == ' ' || c == '.' || c == ',' ||

			c == '\n' || c == '\0')

		{

			if ((glas % 2) != 0 || glas == 0)

			{

				for (j = start; j < i; j++)

					buffer[pos++] = buffer[j];

			}

			glas = 0;

			slovo = NO;

			buffer[pos++] = c;

		}

		else

		{

			if (c == 'a' || c == 'e' || c == 'y' || c == 'u' || c == 'i' || c == 'o' || c == 'à')

			{

				glas++;

			}

			if (slovo == NO)

			{

				slovo = YES;

				start = i;

			}

		}

		i++;

	}

	while (c != '\0');

}
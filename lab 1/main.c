#include <stdio.h>

//#include <stdlib.h>

int main()

{

	float V1;

	float t;

	float V2;

	float S;

	printf("V1 = ");

	scanf("%f", &V1);

	printf("V2 = ");

	scanf("%f", &V2);

	printf("t = ");

	scanf("%f", &t);

	S = (V2*V2 - V1 * V1) / (2 * ((V2 - V1) / t));

	printf("distance = %f\n", S);

	return 0;

}
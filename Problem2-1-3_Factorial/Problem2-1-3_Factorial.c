// Problem2-1-3_Factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning (disable : 4996)


int main()
{
	double n;
	scanf("%lf", &n);
	double factorial = FindFactorial(n);
	if (factorial == EOF)
	{
		printf("undefined");
		exit(EOF);
	}
	printf("%lf", factorial);
    return 0;
}


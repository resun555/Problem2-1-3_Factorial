// stdafx.cpp : source file that includes just the standard includes
// Problem2-1-3_Factorial.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file

double FindFactorial(double n)
{
	if (n < 0.)
	{
		return EOF;
	}
	double intpart = (double)((int)n);
	double decpart = n - intpart;
	double decfact;
	if (decpart >= .5 && decpart < 1.)
	{
		decfact = DecpartFactorial(decpart);
	}
	else if (decpart > 0. && decpart < .5)
	{
		decfact = (1. - decpart) * decpart * M_PI / DecpartFactorial(1. - decpart) / sin(decpart * M_PI);
	}
	else if (decpart == 0.)
	{
		decfact = 1.;
	}
	double factorial = decfact;
	for (double i = decpart + 1; i < n + .5; i++)
	{
		factorial *= i;
	}
	return factorial;
}


double DecpartFactorial(double decpart)
{
	return ((1. + sin(decpart * M_PI) / (1.4 + 25. * decpart)) * pow(decpart, .55 * decpart));
}


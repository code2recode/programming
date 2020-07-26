#include"headerFact.h"

int factorialClass::findFactorial(int fact, int n)
{
	if(n==0)
	return 1;
	return fact*findFactorial(fact, n-1);
};

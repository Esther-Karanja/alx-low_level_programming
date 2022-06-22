#include "main.h"
#include <string.h>

/**
 * factorial- function that returns the factorial of a given number
 * @n: integer number
 *
 * Return: 1 (sucess) or -1 for error
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}

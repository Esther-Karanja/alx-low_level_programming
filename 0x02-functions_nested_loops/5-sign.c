#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number input
 *
 * Return: 1 if n is  greater than zero, 0 if zero and -1 if less
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}

	else
	{
		_putchar ('-');
		return (-1);
	}
}
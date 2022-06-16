#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @st: string to encode
 *
 * Return: pointer to new string
*/
char *leet(char *st)
{
	int i = 0;
	char *ptr = st;

	while (st[i] != '\0')
	{
		if (st[i] >= 'A' && st[i] <= 'Z')
		{
			st[i] = st[i] + 32;
			i++;
		}
		if (st[i] >= 'a' && st[i] <= 'z')
		{
			st[i] = st[i] - 32;
			i++;
		}
	}
	return (ptr);
}

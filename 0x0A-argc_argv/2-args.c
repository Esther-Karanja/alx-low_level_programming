#include "main.h"
#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array
 *
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i > argc; i++)
		printf("argv[%d]: %s\n", i, argv[i]);

	return (0);
}

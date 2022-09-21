#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space,
 * @n: The number to begin counting at
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
		printf("98");
		printf('\n');
}

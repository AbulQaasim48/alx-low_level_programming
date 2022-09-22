#include "main.h"

/**
 * print_triangle - A function who print a triangle
 *
 * @size: size of a triangle
 *
 * Return: Does not return anything
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)

				if (j >= i)
		_putchar('#');
				else
		_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}

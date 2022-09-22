#include "main.h"

/**
 * print_diagonal - A function who print diagonal line n times
 *
 * @n: number of times to print diagonal line
 *
 * Return: Does not return anything
 */
void print_diagonal(int n)
{
	int co, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			for (sp = 1; sp < co; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

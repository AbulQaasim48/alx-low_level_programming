#include <stdio.h>

/**
 * main - Prints lowercase alphabets in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	int b;

	for (b = 'z'; b >= 'a'; b--)
		putchar(b);

	putchar('\n');

	return (0);
}

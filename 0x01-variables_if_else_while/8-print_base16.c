#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: the mission is to print out the base16 numbers
 * which is 0~15 -> 0, 1, 2, ..., 9, a, b, c, d, e, f.
 * note numbers are in lower case, {not A, B, ...}.
 * Return: Always (0).
 */
int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		putchar((i < 10) ? i + '0' : i - 10 + 'a');
	}

	putchar('\n');
	return (0);
}

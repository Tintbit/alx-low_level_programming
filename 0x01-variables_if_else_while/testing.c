#include <stdio.h>

/**
 * main - entry point.
 *
 * Description:
 * Return: Always (0).
 */
int main(void)
{
	int n;

	n = 97; /* ascii char for 'a' */
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}

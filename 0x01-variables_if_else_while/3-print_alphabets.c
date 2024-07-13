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

	n = 'A'; /*yes 'A' is just another char which has int value*/
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}

	putchar('\n'); /* ensuring that there is a new line at the end */
	return (0);
}

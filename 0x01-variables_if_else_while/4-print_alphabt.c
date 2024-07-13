#include <stdio.h>

/**
 * main - entry point.
 *
 * Description:
 * Return: Always (0).
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;

		putchar(c);
	}
	/* another better solution */
	/**
	* for (c = 'a'; c <= 'z'; c++)
	* {
	*	if (c != 'e' && c != 'q')
	*	putchar(c);
	* }
	*/
	putchar('\n');

	return (0);
}

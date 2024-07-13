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
	char c;

	n = 97; /* ascii char for 'a' */
	c = 'a';
	while (n <= 122)
	{
		printf("%c", n);
		n++;
	}

	/* you can also solve it like this */
	/**
	* while ( c <= 'z')
	* {
	*	printf("%c", c);
	*	c++;
	* }
	*/

	printf("\n"); /* ensuring that there is a new line at the end */
	return (0);
}

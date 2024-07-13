#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: solved using printf not putchar!
 * Return: Always (0).
 */
int main(void)
{
	char c;

	c = 'a';

	 while ( c <= 'z')
	 {
		printf("%c", c);
		c++;
	 }

	printf("\n"); /* ensuring that there is a new line at the end */
	return (0);
}

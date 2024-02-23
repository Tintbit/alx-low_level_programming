#include <stdio.h>

/**
 * main - printing some quotes to std
 * description: using fwrite or write, or even system() from stdlib.h
 * @quote: array of char
 *
 * Return: Always (0)
 */
int main(void)
{
	static const char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(quote, sizeof(quote)-1, 1, stderr);
	return (0);
}

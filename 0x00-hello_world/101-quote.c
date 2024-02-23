#include <stdio.h>

/**
 * main - printing some quotes to std
 * description: using fwrite or write, or even system() from stdlib.h
 * void : func parameter!
 *
 * Return: Always (0)
 */
int main(void)
{
static const char
	q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

fwrite(q, sizeof(q) - 1, 1, stderr);
return (1);
}

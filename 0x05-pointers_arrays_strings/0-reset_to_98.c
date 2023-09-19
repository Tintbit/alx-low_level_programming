#include <stdio.h>
/**
 * main - takes var and change it's value to 98
 * @m: pointer type to int
 *
 * Return: new, alternative value of a passed var
 */
int reset_to_98(int *m)
{
	*m = 98;
return (*m);
}

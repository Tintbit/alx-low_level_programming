#include <stdio.h>

/**
 * swap_int - swaps two var values
 * @n: integer to swap it's value with m
 * @m: integer to swap it's value with n
 */
void swap_int(int *n, int *m)
{
	int temp;
	temp=*n;
	*n=*m;
	*m=temp;
}

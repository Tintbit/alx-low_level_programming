#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>


/**
 * main - entry point.
 *
 * Description: To get the last digit of the number stored in the variable n,
 * you can use the modulo operator %. The modulo operator returns the remainder
 * of a division operation, so n % 10 will give you the last digit of n.
 * Example(s):
 *	2466321 % 10 -> last digit is -> 1
 *	8021935 % 10 -> last digit is -> 5
 * Return: Always (0).
 */
int main(void)
{
	int n;
	int last_digit;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is ", n);

	if (last_digit > 5)
	{
		printf("%d and is greater than 5", last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("%d and is less than 6 and not 0", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%d and is 0", last_digit);
	}
	printf("\n"); /* ensuring that there is a new line at the end */
	return (0);
}

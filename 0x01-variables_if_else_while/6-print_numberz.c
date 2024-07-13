#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: 
 * Here's a breakdown of how putchar( n + '0') works
 * i is an integer variable that holds a value from 0 to 9
 * during the loop iteration.
 * '0' is the ASCII value of the character '0', which is 48.
 * i + '0' adds the value of i to the ASCII value of '0',
 * resulting in the ASCII value of the corresponding digit.
 * putchar() takes the ASCII value and prints the corresponding character.
 * For example, if i is 3, then putchar(i + '0') will print 
 * the character '3' (ASCII value 51).
 *
 * what is meant by The ASCII value 53 corresponds to the character '5'. 
 * is that means that 5 is indeed character although its been defined 
 * as an int? or what?
 *
 * Answer
 * No, the integer value 5 is not the same as the character '5'.
 * The statement "The ASCII value 53 corresponds to the character '5'" 
 * means that in the ASCII character encoding, the character '5' has 
 * the numerical value of 53.
 * In programming, we have two different representations for the digit 5:
 * Integer: The integer value 5 is a numeric value that can be used in calculations,
 * comparisons, and other operations. It does not have a visual representation.
 * Character: The character '5' is a single character that represents 
 * the digit 5 visually. However, in the computer's memory, it is stored 
 * as a numerical value based on the character encoding (in this case, ASCII).
 * In ASCII, the character '5' has the numerical value of 53.
 * This means that when you store the character '5' in a variable
 * or pass it to a function, the computer is actually working with 
 * the numerical value 53, which corresponds to the visual representation
 * of the character '5'.
 * So, when the expression i + '0' is used, it's not converting the integer i 
 * to a character. Instead, it's adding the ASCII value of '0' (which is 48) 
 * to the integer i to get the ASCII value of the corresponding digit character.
 * For example, if i is 5, then i + '0' would be:
 * 
 * 5 + '0'
 * = 5 + 48
 * = 53
 * The result is the ASCII value 53, which corresponds to the character '5'. 
 * This allows you to convert an integer value to its corresponding 
 * digit character without using any additional variables of type char.
 * Example(s):
 *	i = 3, '0' = 48 (ascii) -> putchr(3 + 48 = 51 (ascii value) -> 3 (char)
 * 	the (corresponding char) of 51 according to ascii is (3).
 *
 * 	if i is 5, then i + '0' would be:
 *	5 + '0'
 *	= 5 + 48
 *	= 53
 *
 *	The ASCII value 53 corresponds to the character '5'.
 *
 * Return: Always (0).
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0'); 
				 
	putchar('\n');

	return (0);
}

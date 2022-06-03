#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char small = 'a';
	while (small <=  'z')
	{
		putchar(small);
		small++;

	}
	putchar ( '\n' );

	return (0);


}

#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char small = 'a';
        while(small <= 'z')
        {
                putchar(small);
		small++;

        }
	
	char upper = 'A';
	
	while  (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');
	return (0);
}

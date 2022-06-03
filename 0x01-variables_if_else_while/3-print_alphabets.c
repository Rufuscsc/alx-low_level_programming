#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */

int main(void)
{
        for (char small = 'a'; small<= 'z'; small++)
        {
                putchar(small);
                putchar('\n');

        }

       for (char upper = 'A'; upper<= 'Z'; upper++)
       {
	       putchar(upper);
	       putchar('\n');


       }

       return(0);


}

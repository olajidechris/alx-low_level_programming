#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'function to print letters
 * of the alphabet in lower case'
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int n = 97;

	while (n < 123)
	{
 		if(n != 101 && n!= 113)
		{
			putchar ((char)n);
			n++;
		}
 	}

	putchar ('\n');
	return (0);
}

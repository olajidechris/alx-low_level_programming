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
	int m = 65;

	while (n < 123)
	{
		putchar ((char)n);
		n++;
	}

	while (m < 91)
	{
		putchar ((char)m);
		m++;
	}

	putchar ('\n');
	return (0);
}

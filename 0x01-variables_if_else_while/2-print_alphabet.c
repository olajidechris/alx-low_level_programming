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
        unsigned int n = 0;
        char lower_case_alphabet[] = "abcdefghijklmnopqrstuvwxyz";

        while (n < sizeof(lower_case_alphabet))
        {
        	putchar(lower_case_alphabet[n]);
        	n++;
        }
	/*        putchar('\n');*/
        return (0);

	return (0);
}

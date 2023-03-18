#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'function to generate a random number
 * and find if the last digit is zero, >5 or <6 && !0'
 * @parameters: y, n
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	y = n % 10;
	if (y > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	if (y == 0)
		printf("Last digit of %d is %d and is 0\n", n, y);
	else if (y < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, y);

	return (0);
}

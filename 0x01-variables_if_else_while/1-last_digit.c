#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h> 
/* betty style doc for function main goes there find the last digit*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	y = n%10
	if (y > 5)
		printf("Last digit of %d", n," is%d",y," and is greater than 5\n");
	if (y == 0)
		printf("Last digit of %d", n," is%d",y," and is 0\n");
	else if (y < 6)
		printf("Last digit of %d", n," is%d",y," and is less than 6 and not 0\n");
	
	return (0);
}

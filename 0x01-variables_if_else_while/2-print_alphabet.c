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
  int n = 0;
  char lower_case_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  while (n < 26))
    {
      putchar(lower_case_alphabet[n]);
      n++;
    }
  putchar('\n');
  return (0);
}

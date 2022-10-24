#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c); //prototype of the functions
int main(void)
{
    char c;
    if(c = 'A')
      {
	printf("%c: %d\n", c, _isupper(c));
      }
    else if(c = 'a' && c<='z')
      {
	printf("%c: %d\n", c, _isupper(c));
      }
    return (0);
}

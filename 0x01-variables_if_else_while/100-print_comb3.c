#include <stdio.h>
/* more headers goes there */
/* betty style for function main goes there */
/**
 *  *main - Entry point
 *   *
 *    *Return: Always 0 (success)
 *     *
 *
 */
int main(void)
{
	int i = 48, j = 49;

	while (i < 58)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}

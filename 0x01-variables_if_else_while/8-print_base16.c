#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int j = 0;

	while (j < 48)
	{
		if (j < 10)
			putchar(j + '0');
		else if (j > 41)
			putchar(j - 10 + 'A');
		j++;
	}
	putchar(10);
	return (0);
}

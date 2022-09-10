#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int j = 48;

	while (j < 58)
	{
		putchar(j);
		if (j != 57)
		{
			putchar(44);
			putchar(32);
		}
		j++;
	}

	putchar(10);

	return (0);
}

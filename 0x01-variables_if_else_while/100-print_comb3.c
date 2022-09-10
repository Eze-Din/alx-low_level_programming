#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int j = 48, k = 48;

	while (j < 58)
	{
		k = j + 1;
		while (k < 58)
		{
			putchar(j);
			putchar(k);

			if (j < 56 || k < 57)
			{
				putchar(44);
				putchar(32);
			}
			k++;
		}
		j++;
	}
	putchar(10);
	return (0);
}

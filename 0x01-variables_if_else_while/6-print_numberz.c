#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int j = 0;

	while (j < 10)
	{
		putchar(48 + j);
		j++;
	}

	putchar('\n');
	return (0);
}

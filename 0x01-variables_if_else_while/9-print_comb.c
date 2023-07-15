#include <stdio.h>

/**
 * main - prints all possible combinations
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
		putchar (',');
		putchar (' ');
	}
	return (0);
}

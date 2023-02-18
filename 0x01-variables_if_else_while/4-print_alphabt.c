#include <stdio.h>
/**
 * main - Emitting some letters
 *
 * Return: 0
 */
int main(void)
{

	char c;

	for (c = 'a'; c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

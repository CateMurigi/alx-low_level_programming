#include <stdio.h>
/**
 * main - printing alphabets
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = "a"; c <= "z"; c++)
	{
		putchar("%c\n", c);
	}
	return (0);
}

#include <stdio.h>
/**
 * main - printing alphabets
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'c'; ch++)
	{
		putchar("%c\n", ch);
	}
	return (0);
}

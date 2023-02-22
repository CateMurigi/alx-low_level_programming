#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the table
 * main - entry point
 *
 * Return: Always 0
 */

void times_table(void)
{
	int a, b;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			printf("%d ", a * b);
		}
		printf("\n");
	}
}

int main(void)
{
	time_table();
	return (0);
}

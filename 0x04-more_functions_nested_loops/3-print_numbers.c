#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line.
 *
 * Return: returns
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 58; a++)
	{
		putchar(a);
	}
	putchar(10);
}

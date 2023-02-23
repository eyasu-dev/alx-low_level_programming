#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 10 times
 * putchar - print out number
 *
 * Return: result
 */

void more_numbers(void)

{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 <= 14; n2++)
		{
			if (n2 > 9)
			{
				putchar((n2 / 10) + '0');
			}
			putchar((n2 % 10) + '0');
		}
		putchar(10);
	}
}

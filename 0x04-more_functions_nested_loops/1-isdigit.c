#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks a character is digit or not
 * @c: test character
 * Return: both prob
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

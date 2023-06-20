#include "main.h"
/**
 * _islower - show non-zero if c is a lowercase
 * letter; otherwise, it shall return 0.
 * check for alphabetic character
 * @c: the character in ASCII
 * Return : 1 for lowercase character. 0 for the rest (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}


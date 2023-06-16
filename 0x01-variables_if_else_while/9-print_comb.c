#include <stdio.h>
/**
 *main - entntry point
 *Discription:"print number hexa from 0 to 9"
 *Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			n++;
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

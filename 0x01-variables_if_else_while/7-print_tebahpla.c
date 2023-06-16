#include <stdio.h>
/**
 *main - entntry point
 *Discription: print alphabets lowercase"
 *Return: always 0
 */
int main(void)
{
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

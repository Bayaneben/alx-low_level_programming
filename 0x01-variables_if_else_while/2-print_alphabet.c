#include <stdio.h>
/**
 *main - entntry point
 *Discription: print alphabets lowercase"
 *Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

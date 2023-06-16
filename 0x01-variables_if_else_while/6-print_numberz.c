#include <stdio.h>
/**
 *main - entntry point
 *Discription: "print number by putchar"
 *Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}

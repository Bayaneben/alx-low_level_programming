#include <stdio.h>
/**
 *main - entntry point
 *Discription:"print number from 0 to 9"
 *Return: always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}

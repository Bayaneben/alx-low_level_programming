#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entntry point
 *Discription: "check if the number is positif negatif or zero"
 *Return: always 0
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				if (n > 0)
				{
					printf("%d is positive\n", n);
				}
				else if (n == 0)
				{
					printf("%d is zero\n", n);
				}
				else
				{
					printf("%d is negative\n", n);
				}
				return (0);
}

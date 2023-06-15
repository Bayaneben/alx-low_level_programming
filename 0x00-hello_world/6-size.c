#include <stdio.h>
int main(void)
{
        printf("size of char: %lu bytes(s)\n", sizeof(char));
	printf("size of int: %lu bytes(s)\n", sizeof(int));
	printf("size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("size of long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("size of float: %lu bytes(s)\n", sizeof(float));
	return (0);
}

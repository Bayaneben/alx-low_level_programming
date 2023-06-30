#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Expect the best. P"
		"repare for the worst. Capit"
		"alize on what comes.\nhello w"
		"orld !\thello - world 012356he"
		"llo world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}

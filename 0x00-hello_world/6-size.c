#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: the function prints the sizes of different data types
 *
 * Return: o after function success
 */

int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;

	printf("Size of a char: %lu byte(s)\n", (unsigned int)sizeof(c));
	printf("Size of a int: %lu byte(s) \n", (unsigned int)sizeof(i));
	printf("Size of a long int: %lu byte(s) \n", (unsigned int)sizeof(li));
	printf("Size of a long long int: %lu byte(s) \n", (unsigned int)sizeof(lli));
	printf("Size of a float: %lu byte(s) \n", (unsigned int)sizeof(f));
	return (0);

}

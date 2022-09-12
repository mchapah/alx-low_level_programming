#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: output to the standard error
 *
 * Return: 1 for success
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar,\
		2015-10-19\n", 59, 2, stderr);
	return (1);
}

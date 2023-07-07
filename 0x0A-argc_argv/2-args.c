#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments it receives
 * @argv: number of arguments
 * @argv: array of arguments
 *
 * return: alawys 0 (suscess)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		{
			printf("%s\n", argv[i]);

		}

	return (0);
}

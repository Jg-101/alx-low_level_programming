#include <stdio.h>
#include "main.h"
/**
 * main - print the name of program
 * @argc: count argument
 * @argv: argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);

	return (0);
}

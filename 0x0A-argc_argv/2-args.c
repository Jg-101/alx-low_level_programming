#include <stdio.h>
#include "main.h"
/**
 * main - prints name of prog
 * @argc: count arg
 * @argv:arg
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	/*Declare var*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - print each arg*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}

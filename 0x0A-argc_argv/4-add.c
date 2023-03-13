#include <stdio.h>
#include <stdlib.h>
/**
 * main - a main item
 * isNumeric - checks if string is num or not
 * check_num - check - string there are digit
 * @argv: array str
 * @argc: vector
 *
 * Return: Always 0 (Success)
 */
int isNumeric(const char *str)
{
	while (*str != '\0')
	{
		if (*str < 0 || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int count = 1, sum = 0;

	while (count < argc)
	{
		if (isNumeric(argv[count]) == 0)
		{
			puts("Error");
			return (1);
		}
		sum = sum + atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);

	return (0);
}

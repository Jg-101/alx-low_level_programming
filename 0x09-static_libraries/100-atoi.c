#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main function.
 * Return: always 0 on success.
 */
int main(void)
{
	int val;
	char str[20];

	strcpy(str, "98993489");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	strcpy(str, "tutorialspoint.com");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	return (0);
}

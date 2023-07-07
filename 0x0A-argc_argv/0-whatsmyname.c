#include <stdio.h>
#include "main.h"
/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 (success)
 */
int main(int argc _attribute_((unused)), char *argv[])
{
(void)argc;
printf("%s\n", *argv);
return (0);
}

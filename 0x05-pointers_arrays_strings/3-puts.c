#include "main.h"
/**
* _puts - prints a string, followed by a new line,
* @str: pointer to the string to print
* Return: void
*/


void _puts(char *str)
{
int num = 0;
while (str[num])
{
_putchar(str[num]);
num++;
}
_putchar('\n');
}

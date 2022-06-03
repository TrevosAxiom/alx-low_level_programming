#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Main Declaration
 * Return: 0
 * Description: program that prints the alphabet in lower and uppercase.
 */
int main(void)
{
int lcase, ucase;

for (lcase = 'a'; lcase <= 'z'; lcase++)
{
putchar (lcase);
}

for (ucase = 'A'; ucase <= 'Z'; ucase++)
{
putchar (ucase);
}
putchar ('\n');

return (0);
}

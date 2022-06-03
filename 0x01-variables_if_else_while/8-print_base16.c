#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Main Declaration
 * Return: 0
 * Description: prints all single digit numbers of base 16
 */
int main(void)
{
int digit, letter;

for (digit = 0; digit < 10; digit++)
{
putchar('0' + digit);
}

for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}

putchar ('\n');

return (0);
}

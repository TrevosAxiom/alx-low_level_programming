#include <stdio.h>
#include <unistd.h>
/**
 * main - Main Block/Entry
 * Return: 1 for the boys
 * Note: unistd header file to provides access to the POSIX operating
 * system for read and write access
 */
int main(void)
{
char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, ch, sizeof(ch));
return (1);
}

#include "main.h"
/**
* main - Main Declaration
* Return: Int value_type
* Using a custom header
*/
int main(void)
{
char text[] = "_putchar";
int i = 0;
int j = sizeof(text) / sizeof(text[0]);
while (i < j)
{
_putchar(text[i]);
i++;
}
_putchar('\n');
return (0);
}

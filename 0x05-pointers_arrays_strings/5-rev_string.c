#include "main.h"
/**
* rev_string - prints reversed string, followed by a new line
* @s: pointer to the string to print
* Return: void
*/

void rev_string(char *s)
{

int length, i, div;
char temp;

for (length = 0; s[length] != '\0'; length++)
;

i = 0;

div = length / 2;

while (div--)
{
temp = s[length - i - 1];
s[length - i - 1] = s[i];
s[i] = temp;
i++;
}

}

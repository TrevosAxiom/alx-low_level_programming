#include "main.h"
/**
* *cap_string - capitalize words
* @str: pointer
* Return: capitalzied string
*/

char *cap_string(char *str)
{
char sep[] = ",\t;\n; .!?\"(){}";
int mark, i, ii;

for (i = 0; str[i] != '\0'; i++)
{
mark = 0;

if (i == 0)
{
mark = 1;
}
else
{
for (ii = 0; sep[ii] != '\0'; ii++)
{
if (str[i - 1] == sep[ii])
{
mark = 1;
break;
}
}
}

if (mark == 1)
{
if (str[i] <= 'z' && str[i] >= 'a')
{
str[i] -= ('a' - 'A');
}
}
}
return (str);
}

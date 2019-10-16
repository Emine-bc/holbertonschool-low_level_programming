#include "holberton.h"
#include <stdlib.h>
/**
* *_strdu-function returns a pointer to a newly allocated
* space in memory, which contains a copy of the
* string given as a parameter.
*@str: pointer with char type
* Return: NULL if str =null
**/
char *_strdup(char *str)
{
int i, j, l;
char *p;
if (str == NULL)
return (NULL);
for (l = 0; str[l] != '\0'; l++)
;
i = l + 1;
p = malloc(sizeof(char) * i);
if (p == NULL)
return (NULL);
for (j = 0; j < l; j++)
p[j] = str[j];
return (p);
}

#include "holberton.h"
#include <stdlib.h>
/**
* *create_array-faunction that create an array of char
*and initializes a specific char.
*@size: unsigned int
*@c: char type
* Return: NULL if size =0 or the pointer to the array .
**/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;
if (size == 0)
return (NULL);
p = malloc(sizeof(char) * size);
if (p == NULL)
return (NULL);
for (i = 0; i < size;  i++)
p[i] = c;
return (p);
}

#include "holberton.h"
/**
*_strlen_recursion -function that return the length of string s.
*@s:type char string to count length.
*Return: len of s.
**/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_name-function that prints a name.
*@name:char type.
*@f:pointer to a function.
*Return: name.
**/
void print_name(char *name, void (*f)(char *))
{
f(name);
return;
}

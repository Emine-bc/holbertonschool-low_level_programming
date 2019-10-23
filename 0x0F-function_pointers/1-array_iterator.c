#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_iterator-executes a function given as a parameter
*on each element of an array.
*@size: is the size of the array.
*@action:is a pointer to the function you need to use.
*@array: array to iterate.
*Return: void
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
  size_t i;
  if (action == NULL || array == NULL)
    return;
  for (i = 0; i < size; i++)
    action(array[i]);
}
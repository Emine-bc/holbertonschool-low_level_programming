#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
*key_index-a function that gives you the index of a key
*@key:const unsigned char.
*@size:unsigned long int
*Return:Always successs.
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}

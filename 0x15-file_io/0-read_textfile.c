#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <sys/types.h>
/**
* read_textfile-function that reads a text file and prints it
*to the POSIX standard output.
*@filename:name of file to print his contents.
*@letters: size_t type number of chararc to print to the POSIX.
*Return: Always success.
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
int ret = -1;
int a;
ssize_t R;
ssize_t W;
ssize_t ch;
ch = letters;
char *buffer;
if (filename == NULL)
{
return (0);
}
a = open(filename,  O_RDWR);
if (ret  == a)
{
return (0);
}
buffer = malloc(ch * (sizeof(char)));
if (buffer  == NULL)
{
return (0);
}
R = read(a, buffer, ch);
if (ret == R)
{
return (0);
}
W = write(STDOUT_FILENO, buffer, R);
if (ret == W)
{
return (0);
}
 if(W != R)
{
return(0);
}
close (a);
return (W + 1);
}

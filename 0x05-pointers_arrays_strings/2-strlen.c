#include "main.h"
/**
 * int_strlen-function that returns the length of a string
 * @s:strlen
 * Return:(longi)
 */
int _strlen(char *s)
{
       int longi =0;
       
       	while (*s != '\0')
	{
        longi++;
	s++;
	}
	return (longi);
}


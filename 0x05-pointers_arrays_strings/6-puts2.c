#include "main.h"
/**
 * puts2 - prints every other character including first and new line
 * @s:string
 * Return:print
 */
void puts2(char *str)
{
	int longi = 0;
	int t;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o%2 == 0)
	{
			_putchar(str[o]);
		}
                }		
			_putchar('\n');
}	

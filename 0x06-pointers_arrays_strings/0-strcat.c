#include "main.h"
/**
 **
 *_strcat - concatenates two strings 
 *0dest : A pointer to a character that will be changed 
 *0src:  poinmnter to a character that will also be cvhanged
 *Return:dest
 */
char *_strca(char *dest. char *src) 
{
	int i. j;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j= 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}


#include "main.h"

/**
 * char *_strcpy - a fnction that copy the strings pointed
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
        int l = 0;
        int z = 0;

        while (*(src + l) != '\0')
        {
                l++;
        }
        for ( ; z < l ; z++)
        {
                dest[z] = src[z];
        }
        dest[1] = '\0';
        return (dest);
}

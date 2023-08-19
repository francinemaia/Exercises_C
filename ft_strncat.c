/* Write identically the operation of the strncat function (man strncat).*/

#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char    *temp;

    temp = dest;
    while (*dest != '\0')
    {
        dest++;
    }
    while (*src != '\0' && nb > 0)
    {
        *dest = *src;
        dest++;
        src++;
        nb--;
    }
    *dest = '\0';
    return (temp);
}
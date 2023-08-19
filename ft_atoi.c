/*Write a function that converts the beginning of the string to its integer representation
• The string can start with an arbitrary number of 'white space' (as defined by isspace(3))
• The string can be followed by an arbitrary number of + or - signs. The signal - will change the signal of the returned integer based on the number of signals - is even or odd.
• Finally, the string should be followed by any number from base 10.*/

#include <stdio.h>

int ft_atoi(char *str)
{
    int res;
    int i;
    int count;

    i = 0;
    res = 0;
    count = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
            i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            count++;
            i++;    
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    if (count % 2 != 0)
            res = res * -1;
    return (res);
}
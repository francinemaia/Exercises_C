/*Write a function that shows the number passed as a parameter.
The function should be able to show the totality of possible values in a variable of type int. */

#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        nb = nb * -1;
        ft_putnbr(nb);
    }
    else if (nb <= 9)
    {
        ft_putchar(nb + 48);
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + 48);
    }
}
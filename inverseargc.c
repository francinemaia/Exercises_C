/*Write a program that shows the received arguments on the command line. •
One per line in the reverse order of the command line. - Must show all arguments except argv[0]*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    int n;

    i = 0;
    n = argc - 1;
    while (n < argc && n != '\0')
    {
        i = 0;
        while(argv[n][i] != '\0')
        {
            write(1, &argv[n][i], 1);
            i++;
        }
        write(1, "\n", 1);
        n--;
    }
    return (0);
}
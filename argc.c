/*Write a program that shows the received arguments on the command line*/

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int n;

    i = 0;
    n = 1;
    while (n < argc)
    {
        i = 0;
        while (arg[n][i] != '\0')
        {
            write(1, $argv[n][i] != '\0')
            i++;
        }
        write(1, "\n", 1);
        n++;
    }
    return (0);
}
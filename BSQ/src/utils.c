#include <unistd.h>

int ft_strlen(const char *str)
{
    int i = 0;

    while (str[i])
        i++;

    return i;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(const char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}
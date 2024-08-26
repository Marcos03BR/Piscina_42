#include <unistd.h>
#include <stdio.h>

void ft_open_map(const char *filename);
void ft_putchar(char c);
void ft_putstr(const char *str);
int ft_strlen(const char *str);
void ft_empty_file(int errornum);

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "Error\n", 6);
        return (1);
    }
    else
    {
        ft_open_map(argv[1]);
    }
    return (0);
}
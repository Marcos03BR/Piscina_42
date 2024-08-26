#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);
void ft_empty_file(int errornum);

void ft_open_map(const char *filename)
{
    char ch;
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        ft_empty_file(1);
        return;
    }

    while ((ch = fgetc(fp)) != EOF)
        ft_putchar(ch);

    fclose(fp);
}
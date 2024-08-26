#include <unistd.h>

void ft_empty_file(int errornum)
{
    if (errornum == 1)
    {
        write(1, "Empty file\n", 11);
    }
}
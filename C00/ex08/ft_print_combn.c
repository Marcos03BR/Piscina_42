/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:54:57 by mbarranq          #+#    #+#             */
/*   Updated: 2024/07/30 14:21:23 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_combn(int n)
{
    char comb[10];
    int i;

    if (n <= 0 || n >= 10)
    {
        return;
    }

    i = 0;
    while (i < n)
    {
        comb[i] = '0' + i;
        i++;
    }
    comb[n] = '\0';

    while(1)
    {
        write(1, comb, n);
        if (comb[0] == '9' - n + 1)
        {
            break;
        }
        write(1, ", ", 2);

        i = n - 1;
        while (i > 0 && comb[i] == '9' - (n - 1 - i))
        {
            i--;
            if (i < 0)
            {
                break;
            }
            comb[i]++;
            
            int j;
            j = i + 1;
            while (j < n)
            {
                comb[j] = comb[j - 1] + 1;
                j++;
            }
        }
    }
}

int main()
{
    ft_print_combn(9);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:06:50 by mbarranq          #+#    #+#             */
/*   Updated: 2024/08/06 12:48:09 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			hex[0] = "0123456789abcdef"[(unsigned char)str[i] / 16];
			hex[1] = "0123456789abcdef"[(unsigned char)str[i] % 16];
			hex[2] = '\0';
			write(1, hex, 2);
		}
		i++;
	}
}

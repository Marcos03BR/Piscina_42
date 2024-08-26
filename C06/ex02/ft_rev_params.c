/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:28:37 by mbarranq          #+#    #+#             */
/*   Updated: 2024/08/13 19:59:28 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	count;
	int	i;

	count = argc - 1;
	while (count >= 1)
	{
		i = 0;
		while (argv[count][i])
		{
			ft_putchar(argv[count][i]);
			i++;
		}
		ft_putchar('\n');
		count--;
	}
}

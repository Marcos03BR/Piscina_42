/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:12:18 by mbarranq          #+#    #+#             */
/*   Updated: 2024/08/13 17:17:32 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	to_check;

	to_check = nb - 1;
	if (nb == 0 || nb == 1)
		return (0);
	while (to_check > 1)
	{
		if (nb % to_check == 0)
			return (0);
		to_check--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next_number;

	next_number = nb;
	while (!ft_is_prime(next_number))
	{
		next_number++;
	}
	return (next_number);
}

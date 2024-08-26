/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:06:08 by mbarranq          #+#    #+#             */
/*   Updated: 2024/08/13 17:11:32 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	to_check;

	if (nb <= 1)
		return (0);
	to_check = 2;
	while (to_check <= nb / 2)
	{
		if (nb % to_check == 0)
			return (0);
		to_check++;
	}
	return (1);
}

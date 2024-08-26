/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:03:42 by mbarranq          #+#    #+#             */
/*   Updated: 2024/08/05 19:34:05 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	char	temp;
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_is_lowercase(str[i]))
		{
			temp = str[i];
			temp = temp - 32;
			str[i] = temp;
		}
		i++;
	}
	return (str);
}

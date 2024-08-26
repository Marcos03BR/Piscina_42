/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:18:34 by mbarranq          #+#    #+#             */
/*   Updated: 2024/08/05 19:35:09 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	char	temp;
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_is_uppercase(str[i]))
		{
			temp = str[i];
			temp = temp + 32;
			str[i] = temp;
		}
		i++;
	}
	return (str);
}

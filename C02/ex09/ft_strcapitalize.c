/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:48:44 by mbarranq          #+#    #+#             */
/*   Updated: 2024/08/06 12:30:54 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_alnum(char c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_word_start;

	i = 0;
	is_word_start = 1;
	while (str[i])
	{
		if (ft_is_alnum(str[i]))
		{
			if (is_word_start && ft_is_lowercase(str[i]))
				str[i] -= 32;
			else if (!is_word_start && ft_is_uppercase(str[i]))
				str[i] += 32;
			is_word_start = 0;
		}
		else
			is_word_start = 1;
		i++;
	}
	return (str);
}

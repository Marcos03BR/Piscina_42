/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:24:46 by tmendoza          #+#    #+#             */
/*   Updated: 2024/07/28 11:58:14 by tmendoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw(int row, int column, int x, int y)
{
	if ((row == 0 && column == x - 1) || (row == 0 && column == 0))
	{
		ft_putchar('A');
	}
	else if ((row == y - 1 && column == x - 1) || (row == y - 1 && column == 0))
	{
		ft_putchar('C');
	}
	else if (row == 0 || row == y - 1 || column == 0 || column == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 0;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			draw(row, column, x, y);
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}

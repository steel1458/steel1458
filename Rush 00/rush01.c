/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:06:05 by hlim              #+#    #+#             */
/*   Updated: 2021/09/11 18:12:12 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_pattern(int i, int j, int x, int y);
void	rush(int x, int y);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			print_pattern(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	print_pattern(int i, int j, int x, int y)
{	
	if (i == 0 || i == y - 1)
	{
		if ((i == 0 && j == 0) || (j != 0 && i != 0 && j == x - 1))
		{
			ft_putchar('/');
		}
		else if ((i == 0 && j == x - 1) || (i != 0 && i == y - 1 && j == 0))
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
	}
	else if (j == 0 || j == x - 1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

int	main(void)
{
	rush(5, 3);
	return (0);
}

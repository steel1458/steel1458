/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunglee <seunglee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 20:53:50 by seunglee          #+#    #+#             */
/*   Updated: 2021/09/11 20:53:55 by seunglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_pattern(int i, int j, int x, int y);
void	rush(int x, int y);

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
	if (j == 0 || j == x - 1)
	{
		if (i == 0)
		{
			ft_putchar('A');
		}
		else if (i == y - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	}
	else if (i == 0 || i == y - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	rush(5, 3);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	rush(0, 1);
	rush(0, 0);
	rush(1, 0);
	rush(0, 5);
	rush(123, 42);
	return (0);
}

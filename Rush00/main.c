/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:57:12 by hlim              #+#    #+#             */
/*   Updated: 2021/09/11 16:03:49 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_pattern(int i, int j, int x, int y);
void	rush(int x, int y);

int	main(void)
{
	rush(5, 5);
	return (0);
}

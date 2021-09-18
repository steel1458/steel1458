/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunglee <seunglee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 12:37:36 by seunglee          #+#    #+#             */
/*   Updated: 2021/09/18 12:42:14 by seunglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	wrtite(1, &c, 1);
}

void	ft_print_reverse_alpabet(void)
{
	char	reverse;

	reverse = 'z';
	while (reverse >= 'a')
	{
		ft_putchar(reverse);
		reverse--;
	}
}

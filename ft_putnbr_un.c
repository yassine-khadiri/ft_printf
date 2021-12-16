/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhadiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:49:01 by ykhadiri          #+#    #+#             */
/*   Updated: 2021/12/14 16:37:02 by ykhadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_un(unsigned int n)
{
	long int	x;

	x = n;
	if (x >= 10)
	{
		ft_putnbr_un(x / 10);
		ft_putnbr_un(x % 10);
	}
	else
	{
		ft_putchar(x + 48);
	}
	return (ft_get_nb_len_un(n, 10));
}
